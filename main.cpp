#include <GL/glew.h>
#include <GL/glfw.h>
#include <glm/glm.hpp>
#include <SOIL.h>

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "texture.h"

static unsigned int Width = 800;
static unsigned int Height = 600;

int main()
{
	
	//OpenGL Setup
	if (!glfwInit())
	{
		std::cout << "GLFW failed to initialize!\n";
		return 1;
	}
	glfwOpenWindow(Width,Height,0,0,0,0,0,0,GLFW_WINDOW);
	if (glewInit() != GLEW_OK)
	{
		std::cout << "GLEW failed to initialize!\n";
		return 1;
	}
	glfwSetWindowTitle("it's done.");
	glViewport(0,0,Width, Height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0,0,0,0,0,100);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glClearColor(1,0,0,1);
	//OpenGL Setup end
	
	Texture tex;

	while (true)
	{
		
		glClear (GL_COLOR_BUFFER_BIT);

		tex.Draw();
	
		glfwSwapBuffers();

		if (glfwGetKey (GLFW_KEY_ESC))
		{
			return 0;
		}
	}
}
