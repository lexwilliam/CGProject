#include"Mesh.h"
#include"objClass.h"
#include"Skybox.h"

const unsigned int width = 800;
const unsigned int height = 800;


// Vertices coordinates
Vertex wallVertices[] =
{ //					 COORDINATES	    /				NORMAL				/		  COLOR				 /		TexCoord				//
	Vertex{glm::vec3(-250.0f,  125.0f,  250.0f), glm::vec3(0.5,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 4.0f)},	// Left 0
	Vertex{glm::vec3(-250.0f,  125.0f, -250.0f), glm::vec3(0.5,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 4.0f)}, 	// Left 1
	Vertex{glm::vec3(-250.0f, -100.0f, -250.0f), glm::vec3(0.5,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},	// Left 2
	Vertex{glm::vec3(-250.0f, -100.0f,  250.0f), glm::vec3(0.5,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 0.0f)},	// Left 3

	Vertex{glm::vec3(-250.0f,  125.0f, -250.0f), glm::vec3( 0.0f,  0.0f,  0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 4.0f)},	// Back 4
	Vertex{glm::vec3(250.0f,  125.0f, -250.0f), glm::vec3( 0.0f,  0.0f,  0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 4.0f)}, 	// Back 5
	Vertex{glm::vec3(250.0f, -100.0f, -250.0f), glm::vec3( 0.0f,  0.0f,  0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 0.0f)},	// Back 6
	Vertex{glm::vec3(-250.0f, -100.0f, -250.0f), glm::vec3( 0.0f,  0.0f,  0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},	// Back 7

	Vertex{glm::vec3(250.0f,  125.0f,  250.0f), glm::vec3( 0.0f,  0.0f, -0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 4.0f)},	// Front 8
	Vertex{glm::vec3(-250.0f,  125.0f,  250.0f), glm::vec3( 0.0f,  0.0f, -0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 4.0f)}, 	// Front 9
	Vertex{glm::vec3(-250.0f, -100.0f,  250.0f), glm::vec3( 0.0f,  0.0f, -0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},	// Front 10
	Vertex{glm::vec3(250.0f, -100.0f,  250.0f), glm::vec3( 0.0f,  0.0f, -0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 0.0f)},	// Front 11

	Vertex{glm::vec3(250.0f,  125.0f, -250.0f), glm::vec3(-0.5f,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 4.0f)},	// Right 12
	Vertex{glm::vec3(250.0f,  125.0f,  250.0f), glm::vec3(-0.5f,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 4.0f)}, 	// Right 13
	Vertex{glm::vec3(250.0f, -100.0f,  250.0f), glm::vec3(-0.5f,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},	// Right 14
	Vertex{glm::vec3(250.0f, -100.0f, -250.0f), glm::vec3(-0.5f,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 0.0f)},	// Right 15

	Vertex{glm::vec3(-150.0f,  60.0f, -250.0f), glm::vec3(0.0f,  0.0f, 0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.2f, 3.2f)},		// Back-inner 16
	Vertex{glm::vec3(-50.0f,  60.0f, -250.0f), glm::vec3(0.0f,  0.0f, 0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.6f, 3.2f)},		// Back-inner 17
	Vertex{glm::vec3(-50.0f, -60.0f, -250.0f), glm::vec3(0.0f,  0.0f, 0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.6f, 0.8f)},		// Back-inner 18
	Vertex{glm::vec3(-150.0f, -60.0f, -250.0f), glm::vec3(0.0f,  0.0f, 0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.2f, 0.8f)},		// Back-inner 19

	Vertex{glm::vec3(-250.0f,  60.0f, -250.0f), glm::vec3(0.0f,  0.0f, 0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 3.2f)},		// Back-side 20
	Vertex{glm::vec3(250.0f,  60.0f, -250.0f), glm::vec3(0.0f,  0.0f, 0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 3.2f)}, 		// Back-side 21
	Vertex{glm::vec3(250.0f, -60.0f, -250.0f), glm::vec3(0.0f,  0.0f, 0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 0.8f)},		// Back-side 22
	Vertex{glm::vec3(-250.0f, -60.0f, -250.0f), glm::vec3(0.0f,  0.0f, 0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.8f)},		// Back-side 23
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
	Vertex{glm::vec3(-250.0f, -100.0f,  250.0f), glm::vec3(0.0f,  1.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 4.0f)},	// 0
	Vertex{glm::vec3(-250.0f, -100.0f, -250.0f), glm::vec3(0.0f,  1.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 4.0f)}, 	// 1
	Vertex{glm::vec3(250.0f, -100.0f, -250.0f), glm::vec3(0.0f,  1.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},	// 2
	Vertex{glm::vec3(250.0f, -100.0f,  250.0f), glm::vec3(0.0f,  1.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 0.0f)},	// 3

	Vertex{glm::vec3(-250.0f,  125.0f,  250.0f), glm::vec3(0.0f, -1.0f,  0.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(4.0f, 4.0f)},	// 4
	Vertex{glm::vec3(-250.0f,  125.0f, -250.0f), glm::vec3(0.0f, -1.0f,  0.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 4.0f)}, 	// 5
	Vertex{glm::vec3(250.0f,  125.0f, -250.0f), glm::vec3(0.0f, -1.0f,  0.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},	// 6
	Vertex{glm::vec3(250.0f,  125.0f,  250.0f), glm::vec3(0.0f, -1.0f,  0.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(4.0f, 0.0f)},	// 7
};

GLuint floorIndices[] =
{
	0, 1, 2, 
	0, 3, 2,
	4, 5, 6,
	4, 7, 6
};

float rectangleVertices[] =
{
	// Coords    // texCoords
	 1.0f, -1.0f,  1.0f, 0.0f,
	-1.0f, -1.0f,  0.0f, 0.0f,
	-1.0f,  1.0f,  0.0f, 1.0f,

	 1.0f,  1.0f,  1.0f, 1.0f,
	 1.0f, -1.0f,  1.0f, 0.0f,
	-1.0f,  1.0f,  0.0f, 1.0f
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

	// Create a GLFWwindow object of 1280 by 720 pixels, naming it "CGProject"
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

	// TEXTURES

	Texture whiteBrickTexture[]
	{
		Texture("textures/whiteBrickWall.png", "diffuse", 0)
	};

	Texture woodTexture[]
	{
		Texture("textures/woodenFloor.jpg", "diffuse", 0)
	};

	Texture lightWoodTexture[]
	{
		Texture("model/assets/wardrobe/wardrobetex.png", "diffuse", 0)
	};

	Texture windowFrameTexture[]
	{
		Texture("model/assets/old-wooden-window/textures/wood_albedo.jpg", "diffuse", 0),
		Texture("model/assets/old-wooden-window/textures/wood_AO.jpg", "specular", 1)
	};

	Texture couchTexture[]
	{
		Texture("model/assets/couch/couchtex.png", "diffuse", 0)
	};

	Texture doorTexture[]
	{
		Texture("model/assets/door/textures/Door_Default_Albedo.png", "diffuse", 0)
	};

	Texture wood2Texture[]
	{
		Texture("model/assets/dresser/dressertex.png", "diffuse", 0)
	};

	Texture rugTexture[]
	{
		Texture("model/assets/rug/rugTex.jpg", "diffuse", 0)
	};

	Texture blackMatteTexture[]
	{
		Texture("model/assets/monitor/blackmatte.jpg", "diffuse", 0)
	};

	Texture bedSheetTexture[]
	{
		Texture("model/assets/bed/bedsheet.jpg", "diffuse", 0)
	};

	// SHADERS AND MESHES
	Shader skyboxShader("skybox.vert", "skybox.frag");

	// Generates Shader object using shaders default.vert and default.frag
	Shader shaderProgram("default.vert", "default.frag");

	std::vector <Vertex> wallVerts(wallVertices, wallVertices + sizeof(wallVertices) / sizeof(Vertex));
	std::vector <GLuint> wallInd(wallIndices, wallIndices + sizeof(wallIndices) / sizeof(GLuint));
	std::vector <Texture> wallTex(whiteBrickTexture, whiteBrickTexture + sizeof(whiteBrickTexture) / sizeof(Texture));

	Mesh wall(wallVerts, wallInd, wallTex);

	// Floor
	
	std::vector <Vertex> floorVerts(floorVertices, floorVertices + sizeof(floorVertices) / sizeof(Vertex));
	std::vector <GLuint> floorInd(floorIndices, floorIndices + sizeof(floorIndices) / sizeof(GLuint));
	std::vector <Texture> floorTex(woodTexture, woodTexture + sizeof(woodTexture) / sizeof(Texture));

	Mesh floor(floorVerts, floorInd, floorTex);

	std::vector <Vertex> wardrobeVerts;
	std::vector <GLuint> wardrobeInd;
	std::vector <Texture> wardrobeTex(lightWoodTexture, lightWoodTexture + sizeof(lightWoodTexture) / sizeof(Texture));
	
	Object wardrobeLoad("model/assets/wardrobe/wardrobe.obj");
	wardrobeLoad.prep(wardrobeVerts, wardrobeInd);

	Mesh wardrobe(wardrobeVerts, wardrobeInd, wardrobeTex);


	std::vector <Vertex> deskVerts;
	std::vector <GLuint> deskInd;
	std::vector <Texture> deskTex(lightWoodTexture, lightWoodTexture + sizeof(lightWoodTexture) / sizeof(Texture));

	Object deskLoad("model/assets/desk/desk.obj");
	deskLoad.prep(deskVerts, deskInd);

	Mesh desk(deskVerts, deskInd, deskTex);


	std::vector <Vertex> windowFrameVerts;
	std::vector <GLuint> windowFrameInd;
	std::vector <Texture> windowFrameTex(windowFrameTexture, windowFrameTexture + sizeof(windowFrameTexture) / sizeof(Texture));

	Object windowFrameLoad("model/assets/old-wooden-window/source/windowFrame.obj");
	windowFrameLoad.prep(windowFrameVerts, windowFrameInd);

	Mesh windowFrame(windowFrameVerts, windowFrameInd, windowFrameTex);


	std::vector <Vertex> couchVerts;
	std::vector <GLuint> couchInd;
	std::vector <Texture> couchTex(couchTexture, couchTexture + sizeof(couchTexture) / sizeof(Texture));

	Object couchLoad("model/assets/couch/couch.obj");
	couchLoad.prep(couchVerts, couchInd);

	Mesh couch(couchVerts, couchInd, couchTex);


	std::vector <Vertex> doorVerts;
	std::vector <GLuint> doorInd;
	std::vector <Texture> doorTex(doorTexture, doorTexture + sizeof(doorTexture) / sizeof(Texture));

	Object doorLoad("model/assets/door/source/door.obj");
	doorLoad.prep(doorVerts, doorInd);

	Mesh door(doorVerts, doorInd, doorTex);


	std::vector <Vertex> chairVerts;
	std::vector <GLuint> chairInd;
	std::vector <Texture> chairTex(wood2Texture, wood2Texture + sizeof(wood2Texture) / sizeof(Texture));

	Object chairLoad("model/assets/chair/chair.obj");
	chairLoad.prep(chairVerts, chairInd);

	Mesh chair(chairVerts, chairInd, chairTex);


	std::vector <Vertex> bedVerts;
	std::vector <GLuint> bedInd;
	std::vector <Texture> bedTex(bedSheetTexture, bedSheetTexture + sizeof(bedSheetTexture) / sizeof(Texture));

	Object bedLoad("model/assets/bed/bed.obj");
	bedLoad.prep(bedVerts, bedInd);

	Mesh bed(bedVerts, bedInd, bedTex);

	
	std::vector <Vertex> monitorVerts;
	std::vector <GLuint> monitorInd;
	std::vector <Texture> monitorTex(blackMatteTexture, blackMatteTexture + sizeof(blackMatteTexture) / sizeof(Texture));

	Object monitorLoad("model/assets/monitor/monitor.obj");
	monitorLoad.prep(monitorVerts, monitorInd);

	Mesh monitor(monitorVerts, monitorInd, monitorTex);


	std::vector <Vertex> pcVerts;
	std::vector <GLuint> pcInd;
	std::vector <Texture> pcTex(blackMatteTexture, blackMatteTexture + sizeof(blackMatteTexture) / sizeof(Texture));

	Object pcLoad("model/assets/pc/pc.obj");
	pcLoad.prep(pcVerts, pcInd);

	Mesh pc(pcVerts, pcInd, pcTex);


	std::vector <Vertex> rugVerts;
	std::vector <GLuint> rugInd;
	std::vector <Texture> rugTex(rugTexture, rugTexture + sizeof(rugTexture) / sizeof(Texture));

	Object rugLoad("model/assets/rug/rug.obj");
	rugLoad.prep(rugVerts, rugInd);

	Mesh rug(rugVerts, rugInd, rugTex);

	std::vector <Vertex> dresserVerts;
	std::vector <GLuint> dresserInd;
	std::vector <Texture> dresserTex(wood2Texture, wood2Texture + sizeof(wood2Texture) / sizeof(Texture));

	Object dresserLoad("model/assets/dresser/dresser.obj");
	dresserLoad.prep(dresserVerts, dresserInd);

	Mesh dresser(dresserVerts, dresserInd, dresserTex);

	// SCALE, LIGHT, AND POSITION

	glm::vec4 lightColor = glm::vec4(1.0f, 1.0f, 1.0f, 1.0f);
	glm::vec3 lightPos = glm::vec3(-200.0f, 0.0f, -450.0f);

	glm::vec3 roomPos = glm::vec3(0.0f, 0.0f, 0.0f);
	glm::mat4 roomModel = glm::mat4(1.0f);
	roomModel = glm::translate(roomModel, roomPos);

	glm::vec3 wardrobePos = glm::vec3(40.0f, -100.0f, -210.0f);
	glm::mat4 wardrobeModel = glm::mat4(1.0f);
	wardrobeModel = glm::translate(wardrobeModel, wardrobePos);

	glm::vec3 deskPos = glm::vec3(-210.0f, -100.0f, 0.0f);
	glm::mat4 deskModel = glm::mat4(1.0f);
	deskModel = glm::translate(deskModel, deskPos);

	glm::vec3 windowPos = glm::vec3(-100.0f, 0.0f, -250.0f);
	glm::mat4 windowModel = glm::mat4(1.0f);
	windowModel = glm::translate(windowModel, windowPos);
	
	glm::vec3 couchPos = glm::vec3(0.0f, -100.0f, 180.0);
	glm::mat4 couchModel = glm::mat4(1.0f);
	couchModel = glm::translate(couchModel, couchPos);

	glm::vec3 doorPos = glm::vec3(250.0f, 3.0f, 170.0f);
	glm::mat4 doorModel = glm::mat4(1.0f);
	doorModel = glm::translate(doorModel, doorPos);

	glm::vec3 chairPos = glm::vec3(-150.0f, -100.0f, 0.0f);
	glm::mat4 chairModel = glm::mat4(1.0f);
	chairModel = glm::translate(chairModel, chairPos);

	glm::vec3 bedPos = glm::vec3(170.0f, -100.0f, -130.0f);
	glm::mat4 bedModel = glm::mat4(1.0f);
	bedModel = glm::translate(bedModel, bedPos);

	glm::vec3 monitorPos = glm::vec3(-210.0f, -35.0f, 0.0f);
	glm::mat4 monitorModel = glm::mat4(1.0f);
	monitorModel = glm::translate(monitorModel, monitorPos);

	glm::vec3 pcPos = glm::vec3(-210.0f, -35.0f, -50.0f);
	glm::mat4 pcModel = glm::mat4(1.0f);
	pcModel = glm::translate(pcModel, pcPos);

	glm::vec3 rugPos = glm::vec3(0.0f, -100.0f, 0.0f);
	glm::mat4 rugModel = glm::mat4(1.0f);
	rugModel = glm::translate(rugModel, rugPos);

	glm::vec3 dresserPos = glm::vec3(-210.0f, -100.0f, -150.0f);
	glm::mat4 dresserModel = glm::mat4(1.0f);
	dresserModel = glm::translate(dresserModel, dresserPos);

	// SKYBOX
	skyboxShader.Activate();
	glUniform1i(glGetUniformLocation(skyboxShader.ID, "skybox"), 0);

	// Enables the Depth Buffer
	glEnable(GL_DEPTH_TEST);

	std::string facesCubemap[6] =
	{
		"skybox/right.jpg",
		"skybox/left.jpg",
		"skybox/top.jpg",
		"skybox/bottom.jpg",
		"skybox/front.jpg",
		"skybox/back.jpg",
	};

	Skybox skybox(facesCubemap);

	Shader frameBufferProgram("frameBuffer.vert", "frameBuffer.frag");
	Shader shadowMapProgram("shadowMap.vert", "shadowMap.frag");
	Shader shadowCubeMapProgram("shadowCubeMap.vert", "shadowCubeMap.frag", "shadowCubeMap.geom");

	frameBufferProgram.Activate();
	glUniform1i(glGetUniformLocation(frameBufferProgram.ID, "screenTexture"), 0);

	// Prepare framebuffer rectangle VBO and VAO
	unsigned int rectVAO, rectVBO;
	glGenVertexArrays(1, &rectVAO);
	glGenBuffers(1, &rectVBO);
	glBindVertexArray(rectVAO);
	glBindBuffer(GL_ARRAY_BUFFER, rectVBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(rectangleVertices), &rectangleVertices, GL_STATIC_DRAW);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(1);
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float), (void*)(2 * sizeof(float)));


	// Creates the frame buffer object
	unsigned int FBO;
	glGenFramebuffers(1, &FBO);
	glBindFramebuffer(GL_FRAMEBUFFER, FBO);

	// Create Framebuffer Texture
	unsigned int framebufferTexture;
	glGenTextures(1, &framebufferTexture);
	glBindTexture(GL_TEXTURE_2D, framebufferTexture);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, NULL);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE); // Prevents edge bleeding
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE); // Prevents edge bleeding
	glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, framebufferTexture, 0);

	// Create Render Buffer Object
	unsigned int RBO;
	glGenRenderbuffers(1, &RBO);
	glBindRenderbuffer(GL_RENDERBUFFER, RBO);
	glRenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH24_STENCIL8, width, height);
	glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_STENCIL_ATTACHMENT, GL_RENDERBUFFER, RBO);


	// Error checking framebuffer
	auto fboStatus = glCheckFramebufferStatus(GL_FRAMEBUFFER);
	if (fboStatus != GL_FRAMEBUFFER_COMPLETE)
		std::cout << "Framebuffer error: " << fboStatus << std::endl;


	// Framebuffer for Shadow Map
	unsigned int shadowMapFBO;
	glGenFramebuffers(1, &shadowMapFBO);

	// Texture for Shadow Map FBO
	unsigned int shadowMapWidth = 2048, shadowMapHeight = 2048;
	unsigned int shadowMap;
	glGenTextures(1, &shadowMap);
	glBindTexture(GL_TEXTURE_2D, shadowMap);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_DEPTH_COMPONENT, shadowMapWidth, shadowMapHeight, 0, GL_DEPTH_COMPONENT, GL_FLOAT, NULL);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_BORDER);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_BORDER);
	// Prevents darkness outside the frustrum
	float clampColor[] = { 1.0f, 1.0f, 1.0f, 1.0f };
	glTexParameterfv(GL_TEXTURE_2D, GL_TEXTURE_BORDER_COLOR, clampColor);

	glBindFramebuffer(GL_FRAMEBUFFER, shadowMapFBO);
	glFramebufferTexture2D(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_TEXTURE_2D, shadowMap, 0);
	// Needed since we don't touch the color buffer
	glDrawBuffer(GL_NONE);
	glReadBuffer(GL_NONE);
	glBindFramebuffer(GL_FRAMEBUFFER, 0);

	// Matrices needed for the light's perspective
	float farPlane = 1500.0f;
	glm::mat4 orthgonalProjection = glm::ortho(-35.0f, 35.0f, -35.0f, 35.0f, 0.1f, farPlane);
	glm::mat4 perspectiveProjection = glm::perspective(glm::radians(90.0f), 1.0f, 0.1f, farPlane);
	glm::mat4 lightView = glm::lookAt(lightPos, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	glm::mat4 lightProjection = perspectiveProjection * lightView;

	// Framebuffer for Cubemap Shadow Map
	unsigned int pointShadowMapFBO;
	glGenFramebuffers(1, &pointShadowMapFBO);

	// Texture for Cubemap Shadow Map FBO
	unsigned int depthCubemap;
	glGenTextures(1, &depthCubemap);

	glBindTexture(GL_TEXTURE_CUBE_MAP, depthCubemap);
	for (unsigned int i = 0; i < 6; ++i)
		glTexImage2D(GL_TEXTURE_CUBE_MAP_POSITIVE_X + i, 0, GL_DEPTH_COMPONENT,
			shadowMapWidth, shadowMapHeight, 0, GL_DEPTH_COMPONENT, GL_FLOAT, NULL);
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_R, GL_CLAMP_TO_EDGE);

	glBindFramebuffer(GL_FRAMEBUFFER, pointShadowMapFBO);
	glFramebufferTexture(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, depthCubemap, 0);
	glDrawBuffer(GL_NONE);
	glReadBuffer(GL_NONE);
	glBindFramebuffer(GL_FRAMEBUFFER, 0);


	// Matrices needed for the light's perspective on all faces of the cubemap
	glm::mat4 shadowProj = glm::perspective(glm::radians(90.0f), 1.0f, 0.1f, farPlane);
	// Export all matrices to shader
	shadowCubeMapProgram.Activate();
	glUniform1f(glGetUniformLocation(shadowCubeMapProgram.ID, "farPlane"), farPlane);
	// Creates camera object
	Camera camera(width, height, glm::vec3(0.0f, 0.0f, 2.0f));

	// Main while loop
	while (!glfwWindowShouldClose(window))
	{
		// Specify the color of the background
		glClearColor(0.1f, 0.13f, 0.2f, 1.0f);
		// Clean the back buffer and assign the new color to it
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


		// Depth testing needed for Shadow Map
		glEnable(GL_DEPTH_TEST);

		// Preparations for the Shadow Map
		glViewport(0, 0, shadowMapWidth, shadowMapHeight);
		glBindFramebuffer(GL_FRAMEBUFFER, pointShadowMapFBO);
		glClear(GL_DEPTH_BUFFER_BIT);

		wall.Draw(shadowCubeMapProgram, camera, roomModel, lightColor, lightPos, shadowProj);
		floor.Draw(shadowCubeMapProgram, camera, roomModel, lightColor, lightPos, shadowProj);
		windowFrame.Draw(shadowCubeMapProgram, camera, windowModel, lightColor, lightPos, shadowProj);
		couch.Draw(shadowCubeMapProgram, camera, couchModel, lightColor, lightPos, shadowProj);
		wardrobe.Draw(shadowCubeMapProgram, camera, wardrobeModel, lightColor, lightPos, shadowProj);
		desk.Draw(shadowCubeMapProgram, camera, deskModel, lightColor, lightPos, shadowProj);
		chair.Draw(shadowCubeMapProgram, camera, chairModel, lightColor, lightPos, shadowProj);
		door.Draw(shadowCubeMapProgram, camera, doorModel, lightColor, lightPos, shadowProj);
		bed.Draw(shadowCubeMapProgram, camera, bedModel, lightColor, lightPos, shadowProj);
		monitor.Draw(shadowCubeMapProgram, camera, monitorModel, lightColor, lightPos, shadowProj);
		pc.Draw(shadowCubeMapProgram, camera, pcModel, lightColor, lightPos, shadowProj);
		rug.Draw(shadowCubeMapProgram, camera, rugModel, lightColor, lightPos, shadowProj);
		dresser.Draw(shadowCubeMapProgram, camera, dresserModel, lightColor, lightPos, shadowProj);

		glBindFramebuffer(GL_FRAMEBUFFER, 0);
		// Switch back to the default viewport
		glViewport(0, 0, width, height);
		// Bind the custom framebuffer
		glBindFramebuffer(GL_FRAMEBUFFER, FBO);
		// Specify the color of the background
		glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
		// Clean the back buffer and depth buffer
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		// Enable depth testing since it's disabled when drawing the framebuffer rectangle
		glEnable(GL_DEPTH_TEST);
		// Handles camera inputs
		camera.Inputs(window);
		// Updates and exports the camera matrix to the Vertex Shader
		camera.updateMatrix(45.0f, 0.1f, farPlane);

		// Send the light matrix to the shader
		shaderProgram.Activate();
		
		glUniform1f(glGetUniformLocation(shaderProgram.ID, "farPlane"), farPlane);

		// Bind the Shadow Map
		glActiveTexture(GL_TEXTURE0 + 1);
		glBindTexture(GL_TEXTURE_CUBE_MAP, depthCubemap);
		glUniform1i(glGetUniformLocation(shaderProgram.ID, "shadowCubeMap"), 1);

		wall.Draw(shaderProgram, camera, roomModel, lightColor, lightPos, lightProjection);
		floor.Draw(shaderProgram, camera, roomModel, lightColor, lightPos, lightProjection);
		windowFrame.Draw(shaderProgram, camera, windowModel, lightColor, lightPos, lightProjection);
		couch.Draw(shaderProgram, camera, couchModel, lightColor, lightPos, lightProjection);
		wardrobe.Draw(shaderProgram, camera, wardrobeModel, lightColor, lightPos, lightProjection);
		desk.Draw(shaderProgram, camera, deskModel, lightColor, lightPos, lightProjection);
		chair.Draw(shaderProgram, camera, chairModel, lightColor, lightPos, lightProjection);
		door.Draw(shaderProgram, camera, doorModel, lightColor, lightPos, lightProjection);
		bed.Draw(shaderProgram, camera, bedModel, lightColor, lightPos, lightProjection);
		monitor.Draw(shaderProgram, camera, monitorModel, lightColor, lightPos, lightProjection);
		pc.Draw(shaderProgram, camera, pcModel, lightColor, lightPos, lightProjection);
		rug.Draw(shaderProgram, camera, rugModel, lightColor, lightPos, lightProjection);
		dresser.Draw(shaderProgram, camera, dresserModel, lightColor, lightPos, lightProjection);
		
		skybox.Draw(skyboxShader, camera, width, height);

		// Bind the default framebuffer
		glBindFramebuffer(GL_FRAMEBUFFER, 0);
		// Draw the framebuffer rectangle
		frameBufferProgram.Activate();
		glBindVertexArray(rectVAO);
		glDisable(GL_DEPTH_TEST); // prevents framebuffer rectangle from being discarded
		glBindTexture(GL_TEXTURE_2D, framebufferTexture);
		glDrawArrays(GL_TRIANGLES, 0, 6);

		// Swap the back buffer with the front buffer
		glfwSwapBuffers(window);
		// Take care of all GLFW events
		glfwPollEvents();
	}



	// Delete all the objects we've created
	shaderProgram.Delete();
	// Delete window before ending the program
	glfwDestroyWindow(window);
	// Terminate GLFW before ending the program
	glfwTerminate();
	return 0;
}