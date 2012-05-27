#ifndef ANIMATION
#define ANIMATION

#include <vector>
#include <glm/glm.hpp>
#include <string>
#include <GL/glfw.h>
#include <SOIL.h>

class Animation
{
	public:
	Animation();
	
	void PushAnimVector (const char * filepath);
	GLuint GetID(std::string std);

	
	private:
	std::vector <const char *> FramePath;
	std::vector <GLuint> FrameID;
	unsigned int CurFrame;
	
	std::string State;
	
};

#endif
