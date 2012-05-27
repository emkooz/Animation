#ifndef ANIMATION
#define ANIMATION

#include <vector>
#include <glm/glm.hpp>
#include <string>
#include <GL/glfw.h>
#include <SOIL.h>
#include <iostream>

class Animation
{
	public:
	Animation();
	
	void PushAnimVector (const char * filepath);
	GLuint GetID(std::string std);
	void SetSpeed (float s);
	
	private:
	std::vector <const char *> FramePath;
	std::vector <GLuint> FrameID;
	unsigned int CurFrame;
	
	float Speed;
	
	std::string State;
	
};

#endif
