#include "objClass.h"

Object::Object(const char* fname) {
	FILE* file = fopen(fname, "r");
	while (1) {
		char lineHeader[128];
		// read the first word of the line
		int res = fscanf(file, "%s", lineHeader);
		if (res == EOF)
			break; // EOF = End Of File. Quit the loop.
		if (strcmp(lineHeader, "v") == 0) { // determines if the line being read contains information about a vertex
			glm::vec3 vertex;
			fscanf(file, "%f %f %f\n", &vertex.x, &vertex.y, &vertex.z); // inserts the data into the vertex object
			temp_vertices.push_back(vertex); // stores into the local vector
		}
		else if (strcmp(lineHeader, "vt") == 0) { // determines if the line being read contains information about a texCoord
			glm::vec2 uv;
			fscanf(file, "%f %f\n", &uv.x, &uv.y); // inserts the coordinates into the texcoord object
			temp_uvs.push_back(uv); // stores into the local vector
		}
		else if (strcmp(lineHeader, "vn") == 0) { // determines if the line being read contains information about a normal vector
			glm::vec3 normal;
			fscanf(file, "%f %f %f\n", &normal.x, &normal.y, &normal.z); //inserts the normal vector into the object
			temp_normals.push_back(normal); // stores into the local vector
		}
		else if (strcmp(lineHeader, "f") == 0) { // determines if the line contains information about an index
			unsigned int vertexIndex[3], uvIndex[3], normalIndex[3];
			int matches = fscanf(file, "%d/%d/%d %d/%d/%d %d/%d/%d\n", &vertexIndex[0], &uvIndex[0], &normalIndex[0],
				&vertexIndex[1], &uvIndex[1], &normalIndex[1],
				&vertexIndex[2], &uvIndex[2], &normalIndex[2]); // reads the index info in the line
			// pushes back the indices of a polygon into the indices vectors
			vertexIndices.push_back(vertexIndex[0]);
			vertexIndices.push_back(vertexIndex[1]);
			vertexIndices.push_back(vertexIndex[2]);
			uvIndices.push_back(uvIndex[0]);
			uvIndices.push_back(uvIndex[1]);
			uvIndices.push_back(uvIndex[2]);
			normalIndices.push_back(normalIndex[0]);
			normalIndices.push_back(normalIndex[1]);
			normalIndices.push_back(normalIndex[2]);
		}
	}
}

void Object::prep(std::vector <Vertex>& vertices, std::vector <GLuint>& indices) { // takes outside vertices and indices vectors and insert processed obj data
	for (unsigned int i = 0; i < vertexIndices.size(); i++) { // in obj files, indices start from 1, so we subtract by 1 to fit the code
		unsigned int vIndex = vertexIndices[i] - 1;
		unsigned int nIndex = normalIndices[i] - 1;
		unsigned int uIndex = uvIndices[i] - 1;
		// fill in the vertex, normal and texture information in that index into the vectors
		glm::vec3 vertex = temp_vertices[vIndex];
		glm::vec3 normal = temp_normals[nIndex];
		glm::vec2 texCoord = temp_uvs[uIndex];
		vertices.push_back(Vertex{ vertex, normal, glm::vec3(1.0f, 1.0f, 1.0f), texCoord });
		indices.push_back(i);
	}
}