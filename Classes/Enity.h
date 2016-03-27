#pragma once

#include "cocos2d.h"

class Enity : public cocos2d::Ref
{
public:
	Enity();
	~Enity();
protected:
	int HP;
	int MP;
	int NL;
	bool isDead;
	cocos2d::Sprite* m_Sprite;
	cocos2d::Vec2 m_pos;
	virtual void initData();
};