#pragma once

#include "cocos2d.h"
#include "Enity.h"

class Player : public Enity 
{
public:
	Player();
	~Player();
	//static Player* getInstance();
	static Player* Instance;
	void initData();
	void setNode(cocos2d::Node* node);
	void moveLeft();
	void moveRight();
	void stopMove();
	enum WalkState
	{
		WalkLeft,
		WalkRight,
		WalkStop
	};
	WalkState m_WalkState;
private:
	cocos2d::Node* m_Node;
	cocos2d::Action* _leftAction;
	cocos2d::Action* _rightAction;
	cocostudio::timeline::ActionTimeline* _action;
	
};