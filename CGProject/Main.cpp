#include"Mesh.h"
#include"objClass.h"
#include"Skybox.h"

const unsigned int width = 1280;
const unsigned int height = 720;


// Vertices coordinates
Vertex wallVertices[] =
{ //					 COORDINATES	    /				NORMAL				/		  COLOR				 /		TexCoord				//
	Vertex{glm::vec3(-25.0f,  10.0f,  25.0f), glm::vec3(0.5,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 4.0f)},	// Left 0
	Vertex{glm::vec3(-25.0f,  10.0f, -25.0f), glm::vec3(0.5,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 4.0f)}, 	// Left 1
	Vertex{glm::vec3(-25.0f, -10.0f, -25.0f), glm::vec3(0.5,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},	// Left 2
	Vertex{glm::vec3(-25.0f, -10.0f,  25.0f), glm::vec3(0.5,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 0.0f)},	// Left 3

	Vertex{glm::vec3(-25.0f,  10.0f, -25.0f), glm::vec3( 0.0f,  0.0f,  0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 4.0f)},	// Back 4
	Vertex{glm::vec3(25.0f,  10.0f, -25.0f), glm::vec3( 0.0f,  0.0f,  0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 4.0f)}, 	// Back 5
	Vertex{glm::vec3(25.0f, -10.0f, -25.0f), glm::vec3( 0.0f,  0.0f,  0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 0.0f)},	// Back 6
	Vertex{glm::vec3(-25.0f, -10.0f, -25.0f), glm::vec3( 0.0f,  0.0f,  0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},	// Back 7

	Vertex{glm::vec3(25.0f,  10.0f,  25.0f), glm::vec3( 0.0f,  0.0f, -0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 4.0f)},	// Front 8
	Vertex{glm::vec3(-25.0f,  10.0f,  25.0f), glm::vec3( 0.0f,  0.0f, -0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 4.0f)}, 	// Front 9
	Vertex{glm::vec3(-25.0f, -10.0f,  25.0f), glm::vec3( 0.0f,  0.0f, -0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},	// Front 10
	Vertex{glm::vec3(25.0f, -10.0f,  25.0f), glm::vec3( 0.0f,  0.0f, -0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 0.0f)},	// Front 11

	Vertex{glm::vec3(25.0f,  10.0f, -25.0f), glm::vec3(-0.5f,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 4.0f)},	// Right 12
	Vertex{glm::vec3(25.0f,  10.0f,  25.0f), glm::vec3(-0.5f,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 4.0f)}, 	// Right 13
	Vertex{glm::vec3(25.0f, -10.0f,  25.0f), glm::vec3(-0.5f,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},	// Right 14
	Vertex{glm::vec3(25.0f, -10.0f, -25.0f), glm::vec3(-0.5f,  0.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 0.0f)},	// Right 15

	Vertex{glm::vec3(-15.0f,  6.0f, -25.0f), glm::vec3(0.0f,  0.0f, 0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.2f, 3.2f)},		// Back-inner 16
	Vertex{glm::vec3(-5.0f,  6.0f, -25.0f), glm::vec3(0.0f,  0.0f, 0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.6f, 3.2f)},		// Back-inner 17
	Vertex{glm::vec3(-5.0f, -6.0f, -25.0f), glm::vec3(0.0f,  0.0f, 0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.6f, 0.8f)},		// Back-inner 18
	Vertex{glm::vec3(-15.0f, -6.0f, -25.0f), glm::vec3(0.0f,  0.0f, 0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.2f, 0.8f)},		// Back-inner 19

	Vertex{glm::vec3(-25.0f,  6.0f, -25.0f), glm::vec3(0.0f,  0.0f, 0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 3.2f)},		// Back-side 20
	Vertex{glm::vec3(25.0f,  6.0f, -25.0f), glm::vec3(0.0f,  0.0f, 0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 3.2f)}, 		// Back-side 21
	Vertex{glm::vec3(25.0f, -6.0f, -25.0f), glm::vec3(0.0f,  0.0f, 0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(4.0f, 0.8f)},		// Back-side 22
	Vertex{glm::vec3(-25.0f, -6.0f, -25.0f), glm::vec3(0.0f,  0.0f, 0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.8f)},		// Back-side 23
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

	Shader wardrobeShader("wardrobe.vert", "wardrobe.frag");

	std::vector <Vertex> wardrobeVerts;
	std::vector <GLuint> wardrobeInd;
	std::vector <Texture> wardrobeTex(lightWoodTexture, lightWoodTexture + sizeof(lightWoodTexture) / sizeof(Texture));
	
	Object wardrobeLoad("model/assets/wardrobe/DawnWardrobe_a_Internal.OBJ");
	wardrobeLoad.prep(wardrobeVerts, wardrobeInd);

	Mesh wardrobe(wardrobeVerts, wardrobeInd, wardrobeTex);

	Shader deskShader("desk.vert", "desk.frag");

	std::vector <Vertex> deskVerts;
	std::vector <GLuint> deskInd;
	std::vector <Texture> deskTex(lightWoodTexture, lightWoodTexture + sizeof(lightWoodTexture) / sizeof(Texture));

	Object deskLoad("model/assets/desk/MiltonDesk_a_Internal.OBJ");
	deskLoad.prep(deskVerts, deskInd);

	Mesh desk(deskVerts, deskInd, deskTex);

	Shader windowFrameShader("windowFrame.vert", "windowFrame.frag");

	std::vector <Vertex> windowFrameVerts;
	std::vector <GLuint> windowFrameInd;
	std::vector <Texture> windowFrameTex(windowFrameTexture, windowFrameTexture + sizeof(windowFrameTexture) / sizeof(Texture));

	Object windowFrameLoad("model/assets/old-wooden-window/source/windowFrame.obj");
	windowFrameLoad.prep(windowFrameVerts, windowFrameInd);

	Mesh windowFrame(windowFrameVerts, windowFrameInd, windowFrameTex);

	Shader couchShader("couch.vert", "couch.frag");

	std::vector <Vertex> couchVerts;
	std::vector <GLuint> couchInd;
	std::vector <Texture> couchTex(couchTexture, couchTexture + sizeof(couchTexture) / sizeof(Texture));

	Object couchLoad("model/assets/couch/couch.obj");
	couchLoad.prep(couchVerts, couchInd);

	Mesh couch(couchVerts, couchInd, couchTex);

	Shader doorShader("door.vert", "door.frag");

	std::vector <Vertex> doorVerts;
	std::vector <GLuint> doorInd;
	std::vector <Texture> doorTex(doorTexture, doorTexture + sizeof(doorTexture) / sizeof(Texture));

	Object doorLoad("model/assets/door/source/Door.obj");
	doorLoad.prep(doorVerts, doorInd);

	Mesh door(doorVerts, doorInd, doorTex);

	Shader chairShader("chair.vert", "chair.frag");

	std::vector <Vertex> chairVerts;
	std::vector <GLuint> chairInd;
	std::vector <Texture> chairTex(wood2Texture, wood2Texture + sizeof(wood2Texture) / sizeof(Texture));

	Object chairLoad("model/assets/chair/chair.obj");
	chairLoad.prep(chairVerts, chairInd);

	Mesh chair(chairVerts, chairInd, chairTex);

	Shader bedShader("bed.vert", "bed.frag");

	std::vector <Vertex> bedVerts;
	std::vector <GLuint> bedInd;
	std::vector <Texture> bedTex(bedSheetTexture, bedSheetTexture + sizeof(bedSheetTexture) / sizeof(Texture));

	Object bedLoad("model/assets/bed/EdithRoomBed_a_Internal.OBJ");
	bedLoad.prep(bedVerts, bedInd);

	Mesh bed(bedVerts, bedInd, bedTex);

	Shader monitorShader("monitor.vert", "monitor.frag");
	
	std::vector <Vertex> monitorVerts;
	std::vector <GLuint> monitorInd;
	std::vector <Texture> monitorTex(blackMatteTexture, blackMatteTexture + sizeof(blackMatteTexture) / sizeof(Texture));

	Object monitorLoad("model/assets/monitor/monitor.obj");
	monitorLoad.prep(monitorVerts, monitorInd);

	Mesh monitor(monitorVerts, monitorInd, monitorTex);

	Shader pcShader("pc.vert", "pc.frag");

	std::vector <Vertex> pcVerts;
	std::vector <GLuint> pcInd;
	std::vector <Texture> pcTex(blackMatteTexture, blackMatteTexture + sizeof(blackMatteTexture) / sizeof(Texture));

	Object pcLoad("model/assets/pc/pc.obj");
	pcLoad.prep(pcVerts, pcInd);

	Mesh pc(pcVerts, pcInd, pcTex);

	Shader rugShader("rug.vert", "rug.frag");

	std::vector <Vertex> rugVerts;
	std::vector <GLuint> rugInd;
	std::vector <Texture> rugTex(rugTexture, rugTexture + sizeof(rugTexture) / sizeof(Texture));

	Object rugLoad("model/assets/rug/LivingRoomRug_a_Internal.obj");
	rugLoad.prep(rugVerts, rugInd);

	Mesh rug(rugVerts, rugInd, rugTex);

	Shader dresserShader("dresser.vert", "dresser.frag");

	std::vector <Vertex> dresserVerts;
	std::vector <GLuint> dresserInd;
	std::vector <Texture> dresserTex(wood2Texture, wood2Texture + sizeof(wood2Texture) / sizeof(Texture));

	Object dresserLoad("model/assets/dresser/dresser.obj");
	dresserLoad.prep(dresserVerts, dresserInd);

	Mesh dresser(dresserVerts, dresserInd, dresserTex);

	// SCALE, LIGHT, AND POSITION

	glm::vec4 lightColor = glm::vec4(1.0f, 1.0f, 1.0f, 1.0f);
	glm::vec3 lightPos = glm::vec3(-10.0f, 0.0f, -23.0f);

	glm::vec3 roomPos = glm::vec3(0.0f, 0.0f, 0.0f);
	glm::mat4 roomModel = glm::mat4(1.0f);
	roomModel = glm::translate(roomModel, roomPos);

	glm::vec3 wardrobePos = glm::vec3(40.0f, -100.0f, -210.0f);
	glm::mat4 wardrobeModel = glm::mat4(0.1f);
	wardrobeModel = glm::translate(wardrobeModel, wardrobePos);

	glm::vec3 deskPos = glm::vec3(-210.0f, -100.0f, 0.0f);
	glm::mat4 deskModel = glm::mat4(0.1f);
	deskModel = glm::translate(deskModel, deskPos);

	glm::vec3 windowPos = glm::vec3(-100.0f, 0.0f, -250.0f);
	glm::mat4 windowModel = glm::mat4(0.1f);
	windowModel = glm::translate(windowModel, windowPos);

	glm::vec3 couchPos = glm::vec3(0.0f, -100.0f, 180.0);
	glm::mat4 couchModel = glm::mat4(0.1f);
	couchModel = glm::translate(couchModel, couchPos);

	glm::vec3 doorPos = glm::vec3(310.0f, -25.0f, 200.0f);
	glm::mat4 doorModel = glm::mat4(0.08f);
	doorModel = glm::translate(doorModel, doorPos);

	glm::vec3 chairPos = glm::vec3(-150.0f, -100.0f, 0.0f);
	glm::mat4 chairModel = glm::mat4(0.1f);
	chairModel = glm::translate(chairModel, chairPos);

	glm::vec3 bedPos = glm::vec3(170.0f, -100.0f, -130.0f);
	glm::mat4 bedModel = glm::mat4(0.1f);
	bedModel = glm::translate(bedModel, bedPos);

	glm::vec3 monitorPos = glm::vec3(-210.0f, -35.0f, 0.0f);
	glm::mat4 monitorModel = glm::mat4(0.1f);
	monitorModel = glm::translate(monitorModel, monitorPos);

	glm::vec3 pcPos = glm::vec3(-210.0f, -35.0f, -50.0f);
	glm::mat4 pcModel = glm::mat4(0.1f);
	pcModel = glm::translate(pcModel, pcPos);

	glm::vec3 rugPos = glm::vec3(0.0f, -142.8f, 0.0f);
	glm::mat4 rugModel = glm::mat4(0.07f);
	rugModel = glm::translate(rugModel, rugPos);

	glm::vec3 dresserPos = glm::vec3(-210.0f, -100.0f, -150.0f);
	glm::mat4 dresserModel = glm::mat4(0.1f);
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

	// Creates camera object
	Camera camera(width, height, glm::vec3(0.0f, 0.0f, 2.0f));

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

		wall.Draw(wallShader, camera, roomModel, lightColor, lightPos);
		floor.Draw(floorShader, camera, roomModel, lightColor, lightPos);

		windowFrame.Draw(windowFrameShader, camera, windowModel, lightColor, lightPos);
		couch.Draw(couchShader, camera, couchModel, lightColor, lightPos);
		wardrobe.Draw(wardrobeShader, camera, wardrobeModel, lightColor, lightPos);
		desk.Draw(deskShader, camera, deskModel, lightColor, lightPos);
		chair.Draw(chairShader, camera, chairModel, lightColor, lightPos);
		door.Draw(doorShader, camera, doorModel, lightColor, lightPos);
		bed.Draw(bedShader, camera, bedModel, lightColor, lightPos);
		monitor.Draw(monitorShader, camera, monitorModel, lightColor, lightPos);
		pc.Draw(pcShader, camera, pcModel, lightColor, lightPos);
		rug.Draw(rugShader, camera, rugModel, lightColor, lightPos);
		dresser.Draw(dresserShader, camera, dresserModel, lightColor, lightPos);
		
		skybox.Draw(skyboxShader, camera, width, height);

		// Swap the back buffer with the front buffer
		glfwSwapBuffers(window);
		// Take care of all GLFW events
		glfwPollEvents();
	}



	// Delete all the objects we've created
	wallShader.Delete();
	floorShader.Delete();
	wardrobeShader.Delete();
	windowFrameShader.Delete();
	couchShader.Delete();
	// Delete window before ending the program
	glfwDestroyWindow(window);
	// Terminate GLFW before ending the program
	glfwTerminate();
	return 0;
}