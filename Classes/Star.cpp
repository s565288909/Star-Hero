//
//  Star.cpp
//  StarHero
//
//  Created by 史潇 on 16/4/3.
//
//

#include "Star.hpp"

USING_NS_CC;

Star::Star(Layer* layer){
	_starlayer = layer;
	initData();
}

Star::~Star(){};

void Star::initData(){
	_starAngle = 0;
	_starRotateAngle = 0.2f;
	_star = _starlayer->getChildByName("star");
};

void Star::rotateStar(bool left, bool right){
	if (left)
	{
		_star->setRotation(_star->getRotation() + _starRotateAngle);
	}
	else if (right)
	{
		_star->setRotation(_star->getRotation() - _starRotateAngle);
	}
}

Layer* Star::getStarLayer(){
	return _starlayer;
}