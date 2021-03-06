#pragma once
#include "SourceFiles/Renderer.h"
#include "SourceFiles/VertexBufferLayout.h"
#include "SourceFiles/VertexBuffer.h"
#include "SourceFiles/Texture.h"
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"

#include "Fire.h"
#include "ClientS.h"

class Map : public Fire
{
private:
	float positionsRL[16]{
	 -50.0f,    -50.0f, 0.0f, 0.0f,	//0
	  50.0f,    -50.0f, 1.0f, 0.0f,	//1
	  50.0f,   1080.0f, 1.0f, 1.0f,	//2
	 -50.0f,   1080.0f, 0.0f, 1.0f  //3
	};

	float positionsM1[16]{
	-100.0f, -100.0f, 0.0f, 0.0f,	//0
	1920.0f, -100.0f, 1.0f, 0.0f,	//1
	1920.0f,  100.0f, 1.0f, 1.0f,	//2
	-100.0f,  100.0f, 0.0f, 1.0f	//3
	};
	float positionsM2[16]{
	-50.0f,  -50.0f, 0.0f, 0.0f,	//0
	400.0f,  -50.0f, 1.0f, 0.0f,	//1
	400.0f,   20.0f, 1.0f, 1.0f,	//2
	-50.0f,   20.0f, 0.0f, 1.0f		//3
	};
	float positionsM3[16]{
	-50.0f,  -50.0f, 0.0f, 0.0f,	//0
	200.0f,  -50.0f, 1.0f, 0.0f,	//1
	200.0f,   20.0f, 1.0f, 1.0f,	//2
	-50.0f,   20.0f, 0.0f, 1.0f		//3
	};
	float positionsM4[16]{
	-50.0f,  -50.0f, 0.0f, 0.0f,	//0
	850.0f,  -50.0f, 1.0f, 0.0f,	//1
	850.0f,   20.0f, 1.0f, 1.0f,	//2
	-50.0f,   20.0f, 0.0f, 1.0f		//3
	};
	float positionsM5[16]{
	-50.0f,  -50.0f, 0.0f, 0.0f,	//0
	 20.0f,  -50.0f, 1.0f, 0.0f,	//1
	 20.0f,   200.0f, 1.0f, 1.0f,	//2
	-50.0f,   200.0f, 0.0f, 1.0f	//3
	};
	float EnemyP[16]{
	 -65.0f,  -65.0f, 0.0f, 0.0f,	//0
	  65.0f,  -65.0f, 1.0f, 0.0f,	//1
	  65.0f,   65.0f, 1.0f, 1.0f,	//2
	 -65.0f,   65.0f, 0.0f, 1.0f,	//3
	};
	GLuint texture_1, texture_2, texture_3, texture_4, texture_5, texture_6, texture_7, texture_8E, texture_8E2;
	VertexArray va1, va2, va3, va4, va5, va6, va7, va8E;
	int count = 0;
	int ColisMap[13][17]{
		{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1, 1},
		{1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0, 1},
		{1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0, 1},
		{1,	0,	0,	1,	1,	1,	1,	1,	1,	1,	1,	0,	0,	1,	1,	1, 1},
		{1,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0, 1},
		{1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0, 1},
		{1,	0,	1,	1,	0,	0,	0,	1,	1,	1,	1,	0,	0,	0,	0,	0, 1},
		{1,	0,	0,	0,	0,	0,	0,	1,	0,	0,	0,	0,	0,	0,	1,	1, 1},
		{1,	0,	0,	0,	1,	1,	1,	1,	0,	0,	0,	0,	0,	0,	0,	0, 1},
		{1,	0,	0,	0,	0,	0,	0,	0,	0,	1,	1,	1,	0,	0,	0,	0, 1},
		{1,	0,	1,	1,	1,	0,	0,	0,	0,	0,	0,	0,	0,	1,	1,	1, 1},
		{1,	0,	0,	0,	0,	0,	0,	0,	1,	1,	0,	0,	0,	0,	0,	0, 1},
		{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1, 1}
	};
public:
	Map();
	~Map();

	void PrintMP(Shader& shader, glm::mat4 proj, glm::mat4 view, IndexBuffer& index, Renderer& renderer);
	void ColisionMap();
	void SetColPoint(int x, int y, int point);
	int GetColPoint(int x, int y);
	void EnemyCheck();
};

