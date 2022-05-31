#ifndef OBJCLASS_H
#define OBJCLASS_H

#include <glm/glm.hpp>
#include <glad/glad.h>
#include <vector>
#include <fstream>
#include "VBO.h"

class Object {
	std::vector<GLuint> vertexIndices, uvIndices, normalIndices;
	std::vector<glm::vec3> temp_vertices;
	std::vector<glm::vec2> temp_uvs;
	std::vector<glm::vec3> temp_normals;
public:
	// Constructor, reads the obj file and prepares the data
	Object(const char* fname);
	// Inserts the data into the vectors
	void prep(std::vector<Vertex>& vertices, std::vector<GLuint>& indices);
};

#endif