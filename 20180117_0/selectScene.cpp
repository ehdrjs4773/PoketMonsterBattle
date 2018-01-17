#include "stdafx.h"
#include "selectScene.h"


selectScene::selectScene()
{
}


selectScene::~selectScene()
{

}

HRESULT selectScene::init()
{
	_btnSceneChange = new button;
	//버튼 초기화(버튼이미지 키값, X, Y좌표, 프레임X, Y 좌표, 콜백적용될 함수이름)
	_btnSceneChange->init("버튼", WINSIZEX / 2, WINSIZEY - 100,
		PointMake(0, 1), PointMake(0, 0), cbSceneChange);


	return S_OK;
}

void selectScene::release()
{

}

void selectScene::update() 
{
	_btnSceneChange->update();
}

void selectScene::render() 
{
	TextOut(getMemDC(), WINSIZEX / 2, 100, "셀렉트 씬이요!", strlen("셀렉트 씬이요!"));
	_btnSceneChange->render();
}

void selectScene::cbSceneChange()
{
	SCENEMANAGER->changeScene("스타씬");
}