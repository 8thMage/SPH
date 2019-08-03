#version 430 compatibility
#pragma optionNV (unroll all)
layout(std430, binding=0) buffer posBuf{
	int number;
	vec2 position[];
};
layout(std430, binding=4) buffer sourceBins{
	int source_number_of_bins;
	int source_start_of_bins[];
};

layout(location =0) uniform vec2 screenDim;
float getDensity(vec2 fragPos)
{
	float sum = 0;

	vec2 normPos = fragPos / screenDim.xy ;
	ivec2 bin = ivec2(normPos * float(source_number_of_bins).xx);
	ivec2 new_bin=bin;
	float h2 = 0.0009;
	float h6Inv = 1/(h2);
	for(int dy = -1;dy<=1;dy++)
	{
		new_bin.y = bin.y+dy;
		if(new_bin.y < 0 && new_bin.y >= source_number_of_bins) 
			continue;
		for(int dx = -1;dx<=1;dx++)
		{
			new_bin.x = bin.x+dx;
			if(new_bin.x < 0 && new_bin.x >= source_number_of_bins) 
				continue;
			int bin_index = new_bin.x + new_bin.y * source_number_of_bins;
			int start_of_bin = 0;
			if(bin_index !=0) {
				start_of_bin = source_start_of_bins[bin_index - 1];
			}
			int end_of_bin = number;
			if(bin_index != source_number_of_bins * source_number_of_bins) {
				end_of_bin = source_start_of_bins[bin_index];
			}

			for (int i = start_of_bin; i<end_of_bin; i++) {
				vec2 relPos = normPos - position[i] ;
				float h2_minus_r2 = 1-dot(relPos,relPos)/h2;
				float w = h6Inv * h2_minus_r2*h2_minus_r2*h2_minus_r2;
				sum += max(0,w);
			}
		}
	}
	return sum;
}
void main() {
	gl_FragColor = vec4(0,0,0,1);
	float density = getDensity(gl_FragCoord.xy);
	if(density > 0.001){
		gl_FragColor = vec4(1,1,1,1);
	}
}
