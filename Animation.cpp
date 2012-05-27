#include "Animation.hpp"

Animation::Animation ()
{
	CurFrame = 0;
	State = "Repeating";
}

void Animation::PushAnimVector (const char * fp)
{
	FramePath.push_back (fp); 
	
	GLuint id = SOIL_load_OGL_texture(fp, SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, SOIL_FLAG_MIPMAPS);
	
	FrameID.push_back (id);
}

GLuint Animation::GetID (std::string state)
{
	if ((state == "OneTime" && CurFrame != FrameID.size()) || (state == "Repeating"))
	{
		CurFrame = FrameID[(unsigned int)fmod (glfwGetTime() * Speed , FrameID.size() - 1)];
	}
	
	std::cout << CurFrame << std::flush;
	
	return FrameID[CurFrame];
}

void Animation::SetSpeed (float s)
{
	Speed = s;
}
