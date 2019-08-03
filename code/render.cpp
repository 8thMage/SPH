struct Render_context;
typedef HGLRC WGLGETCONTEXT(HDC,HGLRC, int*); 
static PFNGLCREATESHADERPROC glCreateShader;

static PFNGLSHADERSOURCEPROC glShaderSource;
static PFNGLCOMPILESHADERPROC glCompileShader;
static PFNGLGETSHADERIVPROC glGetShaderiv;
static PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog;
static PFNGLCREATEPROGRAMPROC glCreateProgram;
static PFNGLATTACHSHADERPROC glAttachShader;
static PFNGLLINKPROGRAMPROC glLinkProgram;
static PFNGLGETPROGRAMIVPROC glGetProgramiv;
static PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog;
static PFNGLUSEPROGRAMPROC glUseProgram;
static PFNGLBINDBUFFERPROC glBindBuffer;
static PFNGLBINDBUFFERBASEPROC glBindBufferBase;
static PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray;
static PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray;
static PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer;
static PFNGLVERTEXATTRIBIPOINTERPROC glVertexAttribIPointer;
static PFNGLVERTEXATTRIBDIVISORPROC glVertexAttribDivisor;
static PFNGLGENBUFFERSPROC glGenBuffers;
static PFNGLBUFFERDATAPROC glBufferData;
static PFNGLBUFFERSUBDATAPROC glBufferSubData;
static PFNGLCOPYBUFFERSUBDATAPROC glCopyBufferSubData;
static PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation;
static PFNGLUNIFORM3FPROC glUniform3f;
static PFNGLUNIFORM3IPROC glUniform3i;
static PFNGLUNIFORM3FVPROC glUniform3fv;
static PFNGLUNIFORM3IVPROC glUniform3iv;
static PFNGLUNIFORM2FPROC glUniform2f;
static PFNGLUNIFORM2FVPROC glUniform2fv;
static PFNGLUNIFORM1FPROC glUniform1f;
static PFNGLGENVERTEXARRAYSPROC glGenVertexArrays;
static PFNGLBINDVERTEXARRAYPROC glBindVertexArray;
static PFNGLUNIFORMMATRIX4FVPROC glUniformMatrix4fv;
static PFNGLUNIFORMMATRIX4X3FVPROC glUniformMatrix4x3fv;
static PFNGLUNIFORMMATRIX3X4FVPROC glUniformMatrix3x4fv;
static PFNGLDRAWARRAYSINSTANCEDPROC glDrawArraysInstanced;
static PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC glDispatchComputeGroupSizeARB;
static PFNGLMEMORYBARRIERPROC glMemoryBarrier;
static PFNGLCLEARBUFFERSUBDATAPROC glClearBufferSubData;

static void init_function_pointer(){
  glCreateShader=(PFNGLCREATESHADERPROC)wglGetProcAddress("glCreateShader");
  glShaderSource=(PFNGLSHADERSOURCEPROC)wglGetProcAddress("glShaderSource");
  glCompileShader=(PFNGLCOMPILESHADERPROC)wglGetProcAddress("glCompileShader");
  glGetShaderiv=(PFNGLGETSHADERIVPROC)wglGetProcAddress("glGetShaderiv");
  glGetShaderInfoLog=(PFNGLGETSHADERINFOLOGPROC)wglGetProcAddress("glGetShaderInfoLog");
  glCreateProgram=(PFNGLCREATEPROGRAMPROC)wglGetProcAddress("glCreateProgram");
  glAttachShader=(PFNGLATTACHSHADERPROC)wglGetProcAddress("glAttachShader");
  glLinkProgram=(PFNGLLINKPROGRAMPROC)wglGetProcAddress("glLinkProgram");
  glGetProgramiv=(PFNGLGETPROGRAMIVPROC)wglGetProcAddress("glGetProgramiv");
  glGetProgramInfoLog=(PFNGLGETPROGRAMINFOLOGPROC)wglGetProcAddress("glGetProgramInfoLog");
  glUseProgram=(PFNGLUSEPROGRAMPROC)wglGetProcAddress("glUseProgram");
  glBindBuffer=(PFNGLBINDBUFFERPROC)wglGetProcAddress("glBindBuffer");
  glBindBufferBase=(PFNGLBINDBUFFERBASEPROC)wglGetProcAddress("glBindBufferBase");
  glEnableVertexAttribArray=(PFNGLENABLEVERTEXATTRIBARRAYPROC)wglGetProcAddress("glEnableVertexAttribArray");
  glDisableVertexAttribArray=(PFNGLDISABLEVERTEXATTRIBARRAYPROC)wglGetProcAddress("glDisableVertexAttribArray");
  glVertexAttribPointer=(PFNGLVERTEXATTRIBPOINTERPROC)wglGetProcAddress("glVertexAttribPointer");
  glVertexAttribIPointer=(PFNGLVERTEXATTRIBIPOINTERPROC)wglGetProcAddress("glVertexAttribIPointer");
  glVertexAttribDivisor=(PFNGLVERTEXATTRIBDIVISORPROC)wglGetProcAddress("glVertexAttribDivisor");
  glGenBuffers=(PFNGLGENBUFFERSPROC)wglGetProcAddress("glGenBuffers");
  glBufferData=(PFNGLBUFFERDATAPROC)wglGetProcAddress("glBufferData");
  glCopyBufferSubData=(PFNGLCOPYBUFFERSUBDATAPROC)wglGetProcAddress("glCopyBufferSubData");
  glBufferSubData=(PFNGLBUFFERSUBDATAPROC)wglGetProcAddress("glBufferSubData");
  glGetUniformLocation=(PFNGLGETUNIFORMLOCATIONPROC)wglGetProcAddress("glGetUniformLocation");
  glUniform3f=(PFNGLUNIFORM3FPROC)wglGetProcAddress("glUniform3f");
  glUniform3fv=(PFNGLUNIFORM3FVPROC)wglGetProcAddress("glUniform3fv");
  glUniform3iv=(PFNGLUNIFORM3IVPROC)wglGetProcAddress("glUniform3iv");
  glUniform3i=(PFNGLUNIFORM3IPROC)wglGetProcAddress("glUniform3i");
  glUniform2f=(PFNGLUNIFORM2FPROC)wglGetProcAddress("glUniform2f");
  glUniform2fv=(PFNGLUNIFORM2FVPROC)wglGetProcAddress("glUniform2fv");
  glUniform1f=(PFNGLUNIFORM1FPROC)wglGetProcAddress("glUniform1f");
  glGenVertexArrays=(PFNGLGENVERTEXARRAYSPROC)wglGetProcAddress("glGenVertexArrays");
  glBindVertexArray=(PFNGLBINDVERTEXARRAYPROC)wglGetProcAddress("glBindVertexArray");
  glUniformMatrix4fv=(PFNGLUNIFORMMATRIX4FVPROC)wglGetProcAddress("glUniformMatrix4fv");
  glUniformMatrix4x3fv=(PFNGLUNIFORMMATRIX4X3FVPROC)wglGetProcAddress("glUniformMatrix4x3fv");
  glUniformMatrix3x4fv=(PFNGLUNIFORMMATRIX3X4FVPROC)wglGetProcAddress("glUniformMatrix3x4fv");
  glDrawArraysInstanced=(PFNGLDRAWARRAYSINSTANCEDPROC)wglGetProcAddress("glDrawArraysInstanced");
  glDispatchComputeGroupSizeARB=(PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC)wglGetProcAddress("glDispatchComputeGroupSizeARB");
  glMemoryBarrier=(PFNGLMEMORYBARRIERPROC)wglGetProcAddress("glMemoryBarrier");
  glClearBufferSubData=(PFNGLCLEARBUFFERSUBDATAPROC)wglGetProcAddress("glClearBufferSubData");
}
static void render_rectangle(Rect rect,Vec4 color)
{
	glBegin(GL_TRIANGLES);
	glColor4fv(color.xyzw);

	Vec2 lower_left=vec2f(rect.start.x,rect.end.y);
	Vec2 upper_left=vec2f(rect.start.x,rect.start.y);
	Vec2 upper_right=vec2f(rect.end.x,rect.start.y);
	Vec2 lower_right=vec2f(rect.end.x,rect.end.y);
	glVertex2fv(upper_left.E);
	glVertex2fv(upper_right.E);
	glVertex2fv(lower_right.E);

	glVertex2fv(upper_left.E);
	glVertex2fv(lower_right.E);
	glVertex2fv(lower_left.E);
	glEnd();
}
static void render_triangle_3d(Vec3 tri[3],Vec4 color)
{
	glBegin(GL_TRIANGLES);
	glColor4fv(color.xyzw);

	glVertex3fv(tri[0].xyz);
	glVertex3fv(tri[1].xyz);
	glVertex3fv(tri[2].xyz);

	glEnd();
}
GLuint CreateShader(GLenum eShaderType, const char* shader_file,int shader_length )
{
	GLuint shader=glCreateShader(eShaderType);
	//int compiled_shader_length;
	glShaderSource(shader,1 , &shader_file, &shader_length);
	glCompileShader(shader);
	GLint status;
	glGetShaderiv(shader, GL_COMPILE_STATUS, &status);
	if (status == GL_FALSE)
	{
		GLint infoLogLength;
		glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &infoLogLength);
		GLchar *strInfoLog = new GLchar[infoLogLength + 1];
		glGetShaderInfoLog(shader, infoLogLength, NULL, strInfoLog);
		Assert(status == GL_TRUE);
		delete[] strInfoLog;
	}
	return shader;
}
GLuint CreateProgram(GLuint* shaders,int count)
{
	GLuint program=glCreateProgram();
	for(int i=0;i<count;i++)
	{
		glAttachShader(program,shaders[i]);
	}
	glLinkProgram(program);
	GLint status;
	glGetProgramiv(program, GL_LINK_STATUS, &status);

	if (status == GL_FALSE)
	{
		GLint infoLogLength;
		glGetProgramiv(program, GL_INFO_LOG_LENGTH, &infoLogLength);
		GLchar *strInfoLog = new GLchar[infoLogLength + 1];
		glGetProgramInfoLog(program, infoLogLength, NULL, strInfoLog);
		Assert(status == GL_TRUE);
		delete[] strInfoLog;
	}
	return program;
}

GLuint positionBufferObject=0;
GLuint vao=0;
GLuint cube_program=0;
GLuint cube_dim_program=0;

void init_sph_particles(Vec2** position,Vec2** velocity,int** bins,int number, int number_of_bins) {
	*position = (Vec2*)malloc(number * sizeof(Vec2));
	*velocity = (Vec2*)malloc(number * sizeof(Vec2));
	*bins = (int*)malloc(number_of_bins* number_of_bins * sizeof(int));
	float numf = (float)number;
	forei(number_of_bins * number_of_bins){
		(*bins)[i]=0;
	}
	forei(number) {
		(*velocity)[i] = vec2f((float)(i*3/numf),(float)((i%10)/5.f))*0.01;
		(*position)[i] = vec2f((float)(i/numf),(float)((i%10)/10.f));
		Vec2 bin = (*position)[i] * (float)number_of_bins;
		int bin_index = (int)bin.x+((int)(bin.y))*number_of_bins;
		(*bins)[bin_index]++;
	}
}
struct Simulation {
	GLuint position;
	GLuint velocity;
	GLuint intermediate_position;
	GLuint intermediate_velocity;
	GLuint bins;
	GLuint intermediate_bins;

	int number_of_particles;
	int number_of_bins;
	
	GLuint sph_simulation_program;
	
	GLuint sph_organize_program;
	
	GLuint sph_scan_program;

	GLuint sph_render_program;
	
	GLuint screen_dim_position;
};
Simulation init_Simulation() {

	Simulation simulation; 
	Vec2 *position;
	Vec2 *velocity;
	int *bins;
	simulation.number_of_particles = 1024;
	simulation.number_of_bins = 30;
	init_sph_particles(&position,&velocity,&bins,simulation.number_of_particles,simulation.number_of_bins);
	glGenBuffers(1,&simulation.position);
	glBindBuffer(GL_SHADER_STORAGE_BUFFER, simulation.position);
	glBufferData(GL_SHADER_STORAGE_BUFFER, sizeof(int) * 2+ sizeof(Vec2) * simulation.number_of_particles, 0, GL_STREAM_COPY);
	glBufferSubData(GL_SHADER_STORAGE_BUFFER, 0, sizeof(int), &simulation.number_of_particles);
	glBufferSubData(GL_SHADER_STORAGE_BUFFER, sizeof(Vec2), sizeof(Vec2) * simulation.number_of_particles, position);
	glGenBuffers(1,&simulation.intermediate_position);
	glBindBuffer(GL_SHADER_STORAGE_BUFFER, simulation.intermediate_position);
	glBufferData(GL_SHADER_STORAGE_BUFFER, sizeof(int) * 2+ sizeof(Vec2) * simulation.number_of_particles, 0, GL_STREAM_COPY);
	glBufferSubData(GL_SHADER_STORAGE_BUFFER, 0, sizeof(int), &simulation.number_of_particles);

	glGenBuffers(1,&simulation.velocity);
	glBindBuffer(GL_SHADER_STORAGE_BUFFER, simulation.velocity);
	glBufferData(GL_SHADER_STORAGE_BUFFER, sizeof(Vec2) * simulation.number_of_particles, velocity, GL_STREAM_COPY);
	glGenBuffers(1,&simulation.intermediate_velocity);
	glBindBuffer(GL_SHADER_STORAGE_BUFFER, simulation.intermediate_velocity);
	glBufferData(GL_SHADER_STORAGE_BUFFER, sizeof(Vec2) * simulation.number_of_particles, velocity, GL_STREAM_COPY);

	glGenBuffers(1,&simulation.intermediate_bins);
	glBindBuffer(GL_SHADER_STORAGE_BUFFER, simulation.intermediate_bins);
	glBufferData(GL_SHADER_STORAGE_BUFFER, sizeof(int) * (1+simulation.number_of_bins*simulation.number_of_bins), 0, GL_STREAM_COPY);
	glBufferSubData(GL_SHADER_STORAGE_BUFFER, 0, sizeof(int), &simulation.number_of_bins);
	glBufferSubData(GL_SHADER_STORAGE_BUFFER, sizeof(int), sizeof(int) * simulation.number_of_bins * simulation.number_of_bins, bins);

	int zero = 0;
	glGenBuffers(1,&simulation.bins);
	glBindBuffer(GL_SHADER_STORAGE_BUFFER, simulation.bins);
	glBufferData(GL_SHADER_STORAGE_BUFFER, sizeof(int) * (1+simulation.number_of_bins*simulation.number_of_bins), 0, GL_STREAM_COPY);
	glBufferSubData(GL_SHADER_STORAGE_BUFFER, 0, sizeof(int), &simulation.number_of_bins);

	free(position);
	free(velocity);
	free(bins);
	GLuint compute_shader_handles;
	GLuint shader_handles[2];
	int cs_length;
	char *cs;
	read_file_alloc((u8*)"../code/sph_simulation.cs",&cs_length,(void**)&cs);
	compute_shader_handles = CreateShader(GL_COMPUTE_SHADER,cs,cs_length);
	VirtualFree(cs,0,MEM_RELEASE);
	simulation.sph_simulation_program = CreateProgram(&compute_shader_handles,1);
	
	read_file_alloc((u8*)"../code/sph_organize.cs",&cs_length,(void**)&cs);
	compute_shader_handles = CreateShader(GL_COMPUTE_SHADER,cs,cs_length);
	VirtualFree(cs,0,MEM_RELEASE);
	simulation.sph_organize_program = CreateProgram(&compute_shader_handles,1);
	
	read_file_alloc((u8*)"../code/sph_scan.cs",&cs_length,(void**)&cs);
	compute_shader_handles = CreateShader(GL_COMPUTE_SHADER,cs,cs_length);
	VirtualFree(cs,0,MEM_RELEASE);
	simulation.sph_scan_program = CreateProgram(&compute_shader_handles,1);
	int vs_length;
	char *vs;
	read_file_alloc((u8*)"../code/sph.vs",&vs_length,(void**)&vs);
	shader_handles[0] = CreateShader(GL_VERTEX_SHADER,vs,vs_length);
	VirtualFree(vs,0,MEM_RELEASE);
	int fs_length;
	char *fs;
	read_file_alloc((u8*)"../code/sph.fs",&fs_length,(void**)&fs);
	shader_handles[1] = CreateShader(GL_FRAGMENT_SHADER,fs,fs_length);
	VirtualFree(fs,0,MEM_RELEASE);
	simulation.sph_render_program = CreateProgram(shader_handles,2);
	simulation.screen_dim_position= glGetUniformLocation(simulation.sph_render_program, "screenDim");
	
	glUseProgram(simulation.sph_scan_program);
	glBindBufferBase(GL_SHADER_STORAGE_BUFFER,4,simulation.bins);
	glBindBufferBase(GL_SHADER_STORAGE_BUFFER,5,simulation.intermediate_bins);
	glDispatchComputeGroupSizeARB((simulation.number_of_bins*simulation.number_of_bins+127)/128,1,1,128,1,1);
	glMemoryBarrier(GL_SHADER_STORAGE_BARRIER_BIT);

	glUseProgram(simulation.sph_organize_program);
	glBindBufferBase(GL_SHADER_STORAGE_BUFFER,0,simulation.position);
	glBindBufferBase(GL_SHADER_STORAGE_BUFFER,1,simulation.velocity);
	glBindBufferBase(GL_SHADER_STORAGE_BUFFER,2,simulation.intermediate_position);
	glBindBufferBase(GL_SHADER_STORAGE_BUFFER,3,simulation.intermediate_velocity);
	glBindBufferBase(GL_SHADER_STORAGE_BUFFER,4,simulation.bins);
	glDispatchComputeGroupSizeARB((simulation.number_of_particles+127)/128,1,1,128,1,1);
	es_swap(simulation.bins,simulation.intermediate_bins);
	es_swap(simulation.position,simulation.intermediate_position);
	es_swap(simulation.velocity,simulation.intermediate_velocity);
	
	glMemoryBarrier(GL_SHADER_STORAGE_BARRIER_BIT);
	return simulation;
}
void render(Simulation *simulation) 
{
	
	int zero = 0;
	Vec2 screen_dim=get_dimensions(window_rect)	;
	glViewport(0,0,(int)screen_dim.x,(int)screen_dim.y);
	
	glBindBuffer(GL_SHADER_STORAGE_BUFFER,simulation->intermediate_bins);
	glClearBufferSubData(GL_SHADER_STORAGE_BUFFER, GL_R32I, sizeof(int), sizeof(int)*simulation->number_of_bins*simulation->number_of_bins, GL_RED_INTEGER, GL_INT, &zero);
	glMemoryBarrier(GL_SHADER_STORAGE_BARRIER_BIT);

	glUseProgram(simulation->sph_simulation_program);
	glBindBufferBase(GL_SHADER_STORAGE_BUFFER,0,simulation->position);
	glBindBufferBase(GL_SHADER_STORAGE_BUFFER,1,simulation->velocity);
	glBindBufferBase(GL_SHADER_STORAGE_BUFFER,2,simulation->bins);
	glBindBufferBase(GL_SHADER_STORAGE_BUFFER,3,simulation->intermediate_bins);
	glDispatchComputeGroupSizeARB((simulation->number_of_particles+127)/128,1,1,128,1,1);

	glMemoryBarrier(GL_SHADER_STORAGE_BARRIER_BIT);

	glUseProgram(simulation->sph_scan_program);
	glBindBufferBase(GL_SHADER_STORAGE_BUFFER,4,simulation->bins);
	glBindBufferBase(GL_SHADER_STORAGE_BUFFER,5,simulation->intermediate_bins);
	glDispatchComputeGroupSizeARB((simulation->number_of_bins*simulation->number_of_bins+127)/128,1,1,128,1,1);
	glMemoryBarrier(GL_SHADER_STORAGE_BARRIER_BIT);

	glUseProgram(simulation->sph_organize_program);
	glBindBufferBase(GL_SHADER_STORAGE_BUFFER,0,simulation->position);
	glBindBufferBase(GL_SHADER_STORAGE_BUFFER,1,simulation->velocity);
	glBindBufferBase(GL_SHADER_STORAGE_BUFFER,2,simulation->intermediate_position);
	glBindBufferBase(GL_SHADER_STORAGE_BUFFER,3,simulation->intermediate_velocity);
	glBindBufferBase(GL_SHADER_STORAGE_BUFFER,4,simulation->bins);
	glDispatchComputeGroupSizeARB((simulation->number_of_particles+127)/128,1,1,128,1,1);
		
	es_swap(simulation->position,simulation->intermediate_position);
	es_swap(simulation->velocity,simulation->intermediate_velocity);
	es_swap(simulation->bins,simulation->intermediate_bins);

	glMemoryBarrier(GL_SHADER_STORAGE_BARRIER_BIT);

	glUseProgram(simulation->sph_render_program);
	glBindBufferBase(GL_SHADER_STORAGE_BUFFER,0,simulation->position);
	glUniform2fv(simulation->screen_dim_position,1,screen_dim.E);
	glDrawArrays(GL_TRIANGLES,0,6);
}

