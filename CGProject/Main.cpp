#include"Mesh.h"


const unsigned int width = 800;
const unsigned int height = 800;


// Vertices coordinates
Vertex wallVertices[] =
{ //					 COORDINATES	    /				NORMAL				/		  COLOR				 /		TexCoord				//
	Vertex{glm::vec3(-25.0f,  10.0f,  25.0f), glm::vec3(0.5,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 4.0f)},	// Left 0
	Vertex{glm::vec3(-25.0f,  10.0f, -25.0f), glm::vec3(0.5,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 4.0f)}, 	// Left 1
	Vertex{glm::vec3(-25.0f, -10.0f, -25.0f), glm::vec3(0.5,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},	// Left 2
	Vertex{glm::vec3(-25.0f, -10.0f,  25.0f), glm::vec3(0.5,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 0.0f)},	// Left 3

	Vertex{glm::vec3(-25.0f,  10.0f, -25.0f), glm::vec3( 0.0f,  0.0f,  0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 4.0f)},	// Back 4
	Vertex{glm::vec3(25.0f,  10.0f, -25.0f), glm::vec3( 0.0f,  0.0f,  0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 4.0f)}, 	// Back 5
	Vertex{glm::vec3(25.0f, -10.0f, -25.0f), glm::vec3( 0.0f,  0.0f,  0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},	// Back 6
	Vertex{glm::vec3(-25.0f, -10.0f, -25.0f), glm::vec3( 0.0f,  0.0f,  0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 0.0f)},	// Back 7

	Vertex{glm::vec3(25.0f,  10.0f,  25.0f), glm::vec3( 0.0f,  0.0f, -0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 4.0f)},	// Front 8
	Vertex{glm::vec3(-25.0f,  10.0f,  25.0f), glm::vec3( 0.0f,  0.0f, -0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 4.0f)}, 	// Front 9
	Vertex{glm::vec3(-25.0f, -10.0f,  25.0f), glm::vec3( 0.0f,  0.0f, -0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},	// Front 10
	Vertex{glm::vec3(25.0f, -10.0f,  25.0f), glm::vec3( 0.0f,  0.0f, -0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 0.0f)},	// Front 11

	Vertex{glm::vec3(25.0f,  10.0f, -25.0f), glm::vec3(-0.5f,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 4.0f)},	// Right 12
	Vertex{glm::vec3(25.0f,  10.0f,  25.0f), glm::vec3(-0.5f,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 4.0f)}, 	// Right 13
	Vertex{glm::vec3(25.0f, -10.0f,  25.0f), glm::vec3(-0.5f,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},	// Right 14
	Vertex{glm::vec3(25.0f, -10.0f, -25.0f), glm::vec3(-0.5f,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 0.0f)},	// Right 15

	Vertex{glm::vec3(-15.0f,  6.0f, -25.0f), glm::vec3(0.0f,  0.0f, -0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 4.0f)},	// Back-inner 16
	Vertex{glm::vec3(15.0f,  6.0f, -25.0f), glm::vec3(0.0f,  0.0f, -0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 4.0f)}, 	// Back-inner 17
	Vertex{glm::vec3(15.0f, -6.0f, -25.0f), glm::vec3(0.0f,  0.0f, -0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},	// Back-inner 18
	Vertex{glm::vec3(-15.0f, -6.0f, -25.0f), glm::vec3(0.0f,  0.0f, -0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 0.0f)},	// Back-inner 19

	Vertex{glm::vec3(-25.0f,  6.0f, -25.0f), glm::vec3(0.0f,  0.0f, -0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 4.0f)},	// Back-side 20
	Vertex{glm::vec3(25.0f,  6.0f, -25.0f), glm::vec3(0.0f,  0.0f, -0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 4.0f)}, 	// Back-side 21
	Vertex{glm::vec3(25.0f, -6.0f, -25.0f), glm::vec3(0.0f,  0.0f, -0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},	// Back-side 22
	Vertex{glm::vec3(-25.0f, -6.0f, -25.0f), glm::vec3(0.0f,  0.0f, -0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 0.0f)},	// Back-side 23
};



// Indices for vertices order
GLuint wallIndices[] =
{
	0, 1, 2, // left 
	0, 3, 2,
	4, 5, 21, // back
	4, 20, 21,
	20, 23, 19,
	20, 16, 19,
	17, 21, 22,
	17, 18, 22,
	23, 7, 6,
	23, 22, 6,
	8, 9, 10, // front
	8, 11, 10,
	12, 13, 14, // right
	12, 15, 14
};


Vertex floorVertices[] =
{	//					 COORDINATES	    /				NORMAL				/		  COLOR				 /		TexCoord		//
	Vertex{glm::vec3(-25.0f, -10.0f,  25.0f), glm::vec3(0.0f,  1.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 4.0f)},	// 0
	Vertex{glm::vec3(-25.0f, -10.0f, -25.0f), glm::vec3(0.0f,  1.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 4.0f)}, 	// 1
	Vertex{glm::vec3(25.0f, -10.0f, -25.0f), glm::vec3(0.0f,  1.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},	// 2
	Vertex{glm::vec3(25.0f, -10.0f,  25.0f), glm::vec3(0.0f,  1.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 0.0f)},	// 3

	Vertex{glm::vec3(-25.0f,  10.0f,  25.0f), glm::vec3(0.0f, -1.0f,  0.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(4.0f, 4.0f)},	// 4
	Vertex{glm::vec3(-25.0f,  10.0f, -25.0f), glm::vec3(0.0f, -1.0f,  0.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 4.0f)}, 	// 5
	Vertex{glm::vec3(25.0f,  10.0f, -25.0f), glm::vec3(0.0f, -1.0f,  0.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},	// 6
	Vertex{glm::vec3(25.0f,  10.0f,  25.0f), glm::vec3(0.0f, -1.0f,  0.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(4.0f, 0.0f)},	// 7
};

GLuint floorIndices[] =
{
	0, 1, 2, 
	0, 3, 2,
	4, 5, 6,
	4, 7, 6
};


Vertex lightVertices[] =
{ //     COORDINATES     //
	Vertex{glm::vec3(-0.5f, -0.5f,  0.5f)},
	Vertex{glm::vec3(-0.5f, -0.5f, -0.5f)},
	Vertex{glm::vec3(0.5f, -0.5f, -0.5f)},
	Vertex{glm::vec3(0.5f, -0.5f,  0.5f)},
	Vertex{glm::vec3(-0.5f,  0.5f,  0.5f)},
	Vertex{glm::vec3(-0.5f,  0.5f, -0.5f)},
	Vertex{glm::vec3(0.5f,  0.5f, -0.5f)},
	Vertex{glm::vec3(0.5f,  0.5f,  0.5f)}
};

GLuint lightIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	0, 4, 7,
	0, 7, 3,
	3, 7, 6,
	3, 6, 2,
	2, 6, 5,
	2, 5, 1,
	1, 5, 4,
	1, 4, 0,
	4, 5, 6,
	4, 6, 7
};

float skyboxVertices[] =
{
	//   Coordinates
	-1.0f, -1.0f,  1.0f,//        7--------6
	 1.0f, -1.0f,  1.0f,//       /|       /|
	 1.0f, -1.0f, -1.0f,//      4--------5 |
	-1.0f, -1.0f, -1.0f,//      | |      | |
	-1.0f,  1.0f,  1.0f,//      | 3------|-2
	 1.0f,  1.0f,  1.0f,//      |/       |/
	 1.0f,  1.0f, -1.0f,//      0--------1
	-1.0f,  1.0f, -1.0f
};

unsigned int skyboxIndices[] =
{
	// Right
	1, 2, 6,
	6, 5, 1,
	// Left
	0, 4, 7,
	7, 3, 0,
	// Top
	4, 5, 6,
	6, 7, 4,
	// Bottom
	0, 3, 2,
	2, 1, 0,
	// Back
	0, 1, 5,
	5, 4, 0,
	// Front
	3, 7, 6,
	6, 2, 3
};


int main()
{
	// Initialize GLFW
	glfwInit();

	// Tell GLFW what version of OpenGL we are using 
	// In this case we are using OpenGL 3.3
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	// Tell GLFW we are using the CORE profile
	// So that means we only have the modern functions
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// Create a GLFWwindow object of 800 by 800 pixels, naming it "YoutubeOpenGL"
	GLFWwindow* window = glfwCreateWindow(width, height, "CGProject", NULL, NULL);
	// Error check if the window fails to create
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	// Introduce the window into the current context
	glfwMakeContextCurrent(window);

	//Load GLAD so it configures OpenGL
	gladLoadGL();
	// Specify the viewport of OpenGL in the Window
	// In this case the viewport goes from x = 0, y = 0, to x = 800, y = 800
	glViewport(0, 0, width, height);

	Texture whiteBrickTexture[]
	{
		Texture("textures/whiteBrickWall.png", "diffuse", 0)
	};

	Texture woodTexture[]
	{
		Texture("textures/woodenFloor.jpg", "diffuse", 0)
	};

	Shader skyboxShader("skybox.vert", "skybox.frag");

	// Generates Shader object using shaders default.vert and default.frag
	Shader wallShader("wall.vert", "wall.frag");

	std::vector <Vertex> wallVerts(wallVertices, wallVertices + sizeof(wallVertices) / sizeof(Vertex));
	std::vector <GLuint> wallInd(wallIndices, wallIndices + sizeof(wallIndices) / sizeof(GLuint));
	std::vector <Texture> wallTex(whiteBrickTexture, whiteBrickTexture + sizeof(whiteBrickTexture) / sizeof(Texture));

	Mesh wall(wallVerts, wallInd, wallTex);

	// Floor
	Shader floorShader("floor.vert", "floor.frag");
	
	std::vector <Vertex> floorVerts(floorVertices, floorVertices + sizeof(floorVertices) / sizeof(Vertex));
	std::vector <GLuint> floorInd(floorIndices, floorIndices + sizeof(floorIndices) / sizeof(GLuint));
	std::vector <Texture> floorTex(woodTexture, woodTexture + sizeof(woodTexture) / sizeof(Texture));

	Mesh floor(floorVerts, floorInd, floorTex);

	// Shader for light cube
	Shader lightShader("light.vert", "light.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> lightVerts(lightVertices, lightVertices + sizeof(lightVertices) / sizeof(Vertex));
	std::vector <GLuint> lightInd(lightIndices, lightIndices + sizeof(lightIndices) / sizeof(GLuint));
	// Crate light mesh
	Mesh light(lightVerts, lightInd, wallTex);

	glm::vec4 lightColor = glm::vec4(1.0f, 1.0f, 1.0f, 1.0f);
	glm::vec3 lightPos = glm::vec3(0.0f, 8.0f, 0.0f);
	glm::mat4 lightModel = glm::mat4(1.0f);
	lightModel = glm::translate(lightModel, lightPos);

	glm::vec3 roomPos = glm::vec3(0.0f, 0.0f, 0.0f);
	glm::mat4 roomModel = glm::mat4(1.0f);
	roomModel = glm::translate(roomModel, roomPos);

	lightShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(lightShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(lightModel));
	glUniform4f(glGetUniformLocation(lightShader.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	wallShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(wallShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(roomModel));
	glUniform4f(glGetUniformLocation(wallShader.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	glUniform3f(glGetUniformLocation(wallShader.ID, "lightPos"), lightPos.x, lightPos.y, lightPos.z);
	floorShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(floorShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(roomModel));
	glUniform4f(glGetUniformLocation(floorShader.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	glUniform3f(glGetUniformLocation(floorShader.ID, "lightPos"), lightPos.x, lightPos.y, lightPos.z);
	skyboxShader.Activate();
	glUniform1i(glGetUniformLocation(skyboxShader.ID, "skybox"), 0);

	// Enables the Depth Buffer
	glEnable(GL_DEPTH_TEST);

	// Creates camera object
	Camera camera(width, height, glm::vec3(0.0f, 0.0f, 2.0f));

	// Create VAO, VBO, and EBO for the skybox
	unsigned int skyboxVAO, skyboxVBO, skyboxEBO;
	glGenVertexArrays(1, &skyboxVAO);
	glGenBuffers(1, &skyboxVBO);
	glGenBuffers(1, &skyboxEBO);
	glBindVertexArray(skyboxVAO);
	glBindBuffer(GL_ARRAY_BUFFER, skyboxVBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(skyboxVertices), &skyboxVertices, GL_STATIC_DRAW);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, skyboxEBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(skyboxIndices), &skyboxIndices, GL_STATIC_DRAW);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

	// All the faces of the cubemap (make sure they are in this exact order)
	std::string facesCubemap[6] =
	{
		"skybox/right.jpg",
		"skybox/left.jpg",
		"skybox/top.jpg",
		"skybox/bottom.jpg",
		"skybox/front.jpg",
		"skybox/back.jpg",
	};

	// Creates the cubemap texture object
	unsigned int cubemapTexture;
	glGenTextures(1, &cubemapTexture);
	glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture);
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	// These are very important to prevent seams
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_R, GL_CLAMP_TO_EDGE);
	// This might help with seams on some systems
	//glEnable(GL_TEXTURE_CUBE_MAP_SEAMLESS);

	// Cycles through all the textures and attaches them to the cubemap object
	for (unsigned int i = 0; i < 6; i++)
	{
		int width, height, nrChannels;
		unsigned char* data = stbi_load(facesCubemap[i].c_str(), &width, &height, &nrChannels, 0);
		if (data)
		{
			stbi_set_flip_vertically_on_load(false);
			glTexImage2D
			(
				GL_TEXTURE_CUBE_MAP_POSITIVE_X + i,
				0,
				GL_RGB,
				width,
				height,
				0,
				GL_RGB,
				GL_UNSIGNED_BYTE,
				data
			);
			stbi_image_free(data);
		}
		else
		{
			std::cout << "Failed to load texture: " << facesCubemap[i] << std::endl;
			stbi_image_free(data);
		}
	}

	// Main while loop
	while (!glfwWindowShouldClose(window))
	{
		// Specify the color of the background
		glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
		// Clean the back buffer and depth buffer
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


		// Handles camera inputs
		camera.Inputs(window);
		// Updates and exports the camera matrix to the Vertex Shader
		camera.updateMatrix(45.0f, 0.1f, 100.0f);

		light.Draw(lightShader, camera);
		wall.Draw(wallShader, camera);
		floor.Draw(floorShader, camera);

		// Since the cubemap will always have a depth of 1.0, we need that equal sign so it doesn't get discarded
		glDepthFunc(GL_LEQUAL);

		skyboxShader.Activate();
		glm::mat4 view = glm::mat4(1.0f);
		glm::mat4 projection = glm::mat4(1.0f);
		// We make the mat4 into a mat3 and then a mat4 again in order to get rid of the last row and column
		// The last row and column affect the translation of the skybox (which we don't want to affect)
		view = glm::mat4(glm::mat3(glm::lookAt(camera.Position, camera.Position + camera.Orientation, camera.Up)));
		projection = glm::perspective(glm::radians(45.0f), (float)width / height, 0.1f, 100.0f);
		glUniformMatrix4fv(glGetUniformLocation(skyboxShader.ID, "view"), 1, GL_FALSE, glm::value_ptr(view));
		glUniformMatrix4fv(glGetUniformLocation(skyboxShader.ID, "projection"), 1, GL_FALSE, glm::value_ptr(projection));

		// Draws the cubemap as the last object so we can save a bit of performance by discarding all fragments
		// where an object is present (a depth of 1.0f will always fail against any object's depth value)
		glBindVertexArray(skyboxVAO);
		glActiveTexture(GL_TEXTURE0);
		glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture);
		glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0);
		glBindVertexArray(0);

		// Switch back to the normal depth function
		glDepthFunc(GL_LESS);

		// Swap the back buffer with the front buffer
		glfwSwapBuffers(window);
		// Take care of all GLFW events
		glfwPollEvents();
	}



	// Delete all the objects we've created
	wallShader.Delete();
	floorShader.Delete();
	lightShader.Delete();
	// Delete window before ending the program
	glfwDestroyWindow(window);
	// Terminate GLFW before ending the program
	glfwTerminate();
	return 0;
}