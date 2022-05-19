#ifndef WALL_CLASS_H
#define WALL_CLASS_H

#include<glad/glad.h>
#include"shaderClass.h"
#include<glm/gtc/matrix_transform.hpp>
#include"Texture.h"
#include"VAO.h"
#include"VBO.h"
#include"EBO.h"

class Wall {

	GLfloat *createWallVertices(GLfloat x, GLfloat y, GLfloat z)
	{
		GLfloat vertices[176] =
		{ //     COORDINATES		/        COLORS		  /   TexCoord    /	   NORMAL		//
			-x,  y,  z,     0.83f, 0.70f, 0.44f,	2.0f, 2.0f,		1.0f, 1.0f,	 1.0f,				// Left 0
			-x,  y, -z,     0.83f, 0.70f, 0.44f,	0.0f, 2.0f,		1.0f, 1.0f,	 1.0f,				// Left 1
			-x, -y, -z,     0.83f, 0.70f, 0.44f,	0.0f, 0.0f,		1.0f, 1.0f,	 1.0f,				// Left 2
			-x, -y,  z,     0.83f, 0.70f, 0.44f,	2.0f, 0.0f,		1.0f, 1.0f,	 1.0f,				// Left 3

			-x,  y, -z,     0.83f, 0.70f, 0.44f,	2.0f, 2.0f,		1.0f, 1.0f,	 1.0f,				// Back 4
			 x,  y, -z,     0.83f, 0.70f, 0.44f,	0.0f, 2.0f,		1.0f, 1.0f,	 1.0f,				// Back 5
			 x, -y, -z,     0.83f, 0.70f, 0.44f,	0.0f, 0.0f,		1.0f, 1.0f,	 1.0f,				// Back 6
			-x, -y, -z,     0.83f, 0.70f, 0.44f,	2.0f, 0.0f,		1.0f, 1.0f,	 1.0f,				// Back 7

			 x,  y,  z,     0.83f, 0.70f, 0.44f,	2.0f, 2.0f,		1.0f, 1.0f,	 1.0f,				// Front 8
			-x,  y,  z,     0.83f, 0.70f, 0.44f,	0.0f, 2.0f,		1.0f, 1.0f,	 1.0f,				// Front 9
			-x, -y,  z,     0.83f, 0.70f, 0.44f,	0.0f, 0.0f,		1.0f, 1.0f,	 1.0f,				// Front 10
			 x, -y,  z,     0.83f, 0.70f, 0.44f,	2.0f, 0.0f,		1.0f, 1.0f,	 1.0f,				// Front 11

			 x,  y, -z,     0.83f, 0.70f, 0.44f,	2.0f, 2.0f,		1.0f, 1.0f,	 1.0f,				// Right 12
			 x,  y,  z,     0.83f, 0.70f, 0.44f,	0.0f, 2.0f,		1.0f, 1.0f,	 1.0f,				// Right 13
			 x, -y,  z,     0.83f, 0.70f, 0.44f,	0.0f, 0.0f,		1.0f, 1.0f,	 1.0f,				// Right 14
			 x, -y, -z,     0.83f, 0.70f, 0.44f,	2.0f, 0.0f,		1.0f, 1.0f,	 1.0f				// Right 15
		};
		return vertices;
	}

	public: 

		Wall(GLfloat x, GLfloat y, GLfloat z, glm::vec3 position, Shader shaderProgram, Texture tex);

		GLfloat wallVertices[176];

		GLuint wallIndices[24] =
		{
			0, 1, 2, // left 
			0, 3, 2,
			4, 5, 6, // back
			4, 7, 6,
			8, 9, 10, // front
			8, 11, 10,
			12, 13, 14, // right
			12, 15, 14
		};

		VAO wallVAO;
};

#endif