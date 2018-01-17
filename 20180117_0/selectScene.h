#pragma once
#include "gameNode.h"
#include "button.h"

class selectScene : public gameNode
{
private:
	//씬 바꿀때 사용할 버튼
	button* _btnSceneChange;

public:
	HRESULT init();
	void release();
	void update();
	void render();

	//전역으로 되어있어서 static으로 해줬다(콜백함수에 사용될 함수)
	static void cbSceneChange();


	selectScene();
	~selectScene();
};

