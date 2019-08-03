#version 430 compatibility
#extension GL_ARB_compute_shader : enable
#extension GL_ARB_shader_storage_buffer_object : enable
#extension GL_ARB_compute_variable_group_size : enable
layout(local_size_variable) in;

layout(std430, binding=0) buffer posBuf{
	int number;
	vec2 position[];
};

layout(std430, binding=1) buffer velBuf{
	vec2 velocity[];
};

layout(std430, binding=2) buffer dest_posBuf{
	int dest_number;
	vec2 dest_position[];
};

layout(std430, binding=3) buffer dest_velBuf{
	vec2 dest_velocity[];
};

layout(std430, binding=4) buffer sourceBins{
	int source_number_of_bins;
	int source_start_of_bins[];
};

void main(){
	uint gid = gl_GlobalInvocationID.x;
	if(gid >= number) {
		return;
	}
	vec2 vel = velocity[gid];
	vec2 pos = position[gid];
	ivec2 bin = ivec2(pos * float(source_number_of_bins).xx);
	int bin_index = bin.x + bin.y * source_number_of_bins;
	int particle_index = atomicAdd(source_start_of_bins[bin_index],1);
	dest_position[particle_index] = pos;
	dest_velocity[particle_index] = vel;
}
