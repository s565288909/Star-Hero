#pragma once

#include "cocos2d.h"

class Enity : public cocos2d::CCObject
{
public:
	Enity();
	~Enity();
	cocos2d::Node* getNode();
protected:
	int HP;
	int MP;
	int NL;
	bool isDead;
	cocos2d::Node* m_Node;
	virtual void initData();
};