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

layout(std430, binding=2) buffer sourceBins{
	int source_number_of_bins;
	int source_start_of_bins[];
};

layout(std430, binding=3) buffer destinationBins{
	int dest_number_of_bins;
	int dest_start_of_bins[];
};

void main() {
	uint gid = gl_GlobalInvocationID.x;
	if(gid >= number){
		return;
	}
	vec2 vel = velocity[gid];
	vec2 pos = position[gid];
	float dt = 1;
	pos += vel * dt;
	vel -= vec2(0,0.001)*dt+normalize(vel)*0.0001;
	for(int i = 0;i<2;i++)
	{
		if (pos[i]>1)
		{
			pos[i] = 1-(pos[i]-1);
			vel[i] = -vel[i];
		}
		if (pos[i]<0)
		{
			pos[i] = -pos[i];
			vel[i] = -vel[i];
		}
	}
	position[gid] = pos;
	velocity[gid] = vel;
	
	ivec2 bin = ivec2(pos * float(dest_number_of_bins).xx);
	int bin_index = bin.x + bin.y * dest_number_of_bins;
	atomicAdd(dest_start_of_bins[bin_index],1);
}

