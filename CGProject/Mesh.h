#ifndef MESH_CLASS_H
#define MESH_CLASS_H

#include<string>

#include"VAO.h"
#include"EBO.h"
#include"Camera.h"
#include"Texture.h"

class Mesh
{
public:
	std::vector <Vertex> vertices;
	std::vector <GLuint> indices;
	std::vector <Texture> textures;

	VAO VAO;

	Mesh(std::vector <Vertex>& vertices, std::vector <GLuint>& indices, std::vector <Texture>& textures);

	void Draw(Shader& shader, Camera& camera, glm::mat4 model, glm::vec4 lightColor, glm::vec3 lightPos, glm::mat4 shadowProj);

	void Draw(Shader& shader, Camera& camera, glm::mat4 model, glm::vec4 lightColor, glm::vec3 lightPos, glm::vec3 lightPos2, glm::mat4 lightProjection, glm::mat4 lightProjection2);
};

#endif