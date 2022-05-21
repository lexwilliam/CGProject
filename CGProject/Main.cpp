#include"Mesh.h"


const unsigned int width = 800;
const unsigned int height = 800;


// Vertices coordinates
Vertex wallVertices[] =
{ //					 COORDINATES	    /				NORMAL				/		  COLOR				 /		TexCoord				//
	Vertex{glm::vec3(-25.0f,  10.0f,  25.0f), glm::vec3(0.3f,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 4.0f)},	// Left 0
	Vertex{glm::vec3(-25.0f,  10.0f, -25.0f), glm::vec3(0.3f,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 4.0f)}, 	// Left 1
	Vertex{glm::vec3(-25.0f, -10.0f, -25.0f), glm::vec3(0.3f,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},	// Left 2
	Vertex{glm::vec3(-25.0f, -10.0f,  25.0f), glm::vec3(0.3f,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 0.0f)},	// Left 3

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
};



// Indices for vertices order
GLuint wallIndices[] =
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
	GLFWwindow* window = glfwCreateWindow(width, height, "YoutubeOpenGL", NULL, NULL);
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
		Texture("whiteBrickWall.png", "diffuse", 0, GL_RGB, GL_UNSIGNED_BYTE)
	};

	Texture woodTexture[]
	{
		Texture("woodenFloor.jpg", "diffuse", 0, GL_RGB, GL_UNSIGNED_BYTE)
	};

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


	// Enables the Depth Buffer
	glEnable(GL_DEPTH_TEST);

	// Creates camera object
	Camera camera(width, height, glm::vec3(0.0f, 0.0f, 0.0f));

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

		wall.Draw(wallShader, camera);
		floor.Draw(floorShader, camera);
		light.Draw(lightShader, camera);

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