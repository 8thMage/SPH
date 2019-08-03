#version 430 compatibility
#extension GL_ARB_compute_shader : enable
#extension GL_ARB_shader_storage_buffer_object : enable
#extension GL_ARB_compute_variable_group_size : enable

layout(local_size_variable) in;

layout(std430, binding=4) buffer sourceBins{
	int source_number_of_bins;
	int source_start_of_bins[];
};

layout(std430, binding=5) buffer destinationBins{
	int dest_number_of_bins;
	int dest_start_of_bins[];
};

void main(){
	uint gid = gl_GlobalInvocationID.x;
	if(gid >= dest_number_of_bins*dest_number_of_bins) {
		return;
	}
	source_start_of_bins[gid] = 0;
	for(int i=0;i<gid;i++)
	{
		source_start_of_bins[gid] += dest_start_of_bins[i];
	}
}
