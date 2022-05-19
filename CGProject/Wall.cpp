#include"Wall.h"

Wall::Wall(GLfloat x, GLfloat y, GLfloat z, glm::vec3 position, Shader shaderProgram, Texture tex) 
{	
	Wall::createWallVertices(x, y, z);

	wallVAO.Bind();

	VBO wallVBO(wallVertices, sizeof(wallVertices));
	EBO wallEBO(wallIndices, sizeof(wallIndices));

	wallVAO.LinkAttrib(wallVBO, 0, 3, GL_FLOAT, 11 * sizeof(float), (void*)0);
	wallVAO.LinkAttrib(wallVBO, 1, 3, GL_FLOAT, 11 * sizeof(float), (void*)(3 * sizeof(float)));
	wallVAO.LinkAttrib(wallVBO, 2, 2, GL_FLOAT, 11 * sizeof(float), (void*)(6 * sizeof(float)));
	wallVAO.LinkAttrib(wallVBO, 3, 3, GL_FLOAT, 11 * sizeof(float), (void*)(8 * sizeof(float)));

	wallVAO.Unbind();
	wallVBO.Unbind();
	wallEBO.Unbind();

	tex.texUnit(shaderProgram, "tex0", 0);
}
