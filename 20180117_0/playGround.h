#pragma once
#include "gameNode.h"
#include "starcraftScene.h"
#include "selectScene.h"

class playGround : public gameNode
{
private:
	gameNode* _starScene;
	gameNode* _select;

	gameNode* _currentScene;
	
	RECT _RC;
	float x;
<<<<<<< HEAD

	DWORD yeahhhh;
=======
	int a, b, c, d;
>>>>>>> e1c60783b6561482d43cd08c191b30aff72c4972
public:
	virtual HRESULT init(void);		//�ʱ�ȭ �Լ�
	virtual void release(void);		//�޸� ���� ����
	virtual void update(void);		//������Ʈ(����)
	virtual void render(void);		//�׷��ִ� �Լ�



	playGround();
	~playGround();
};

