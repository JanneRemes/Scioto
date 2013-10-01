#ifndef SHADER_H
#define SHADER_H

#include <OpenGL.h>
#include <Debug.h>

namespace Scioto
{

class Shader
{
public:
	Shader();
	~Shader();

	GLuint loadShader(GLenum shaderType, const char* pSource);

	//Declare gl object "handles" 
		
    //amount of vertices for the object
    unsigned int num_vertices;

	GLfloat* Data;

    GLuint VBO; 
    GLuint PS,VS; 
    GLuint Program;

private:
	Shader(Shader& shader);

	void CheckForCompileError(const GLenum& shaderType, GLenum& shader);
	
};


}
#endif