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

void Star::initData(){};

Layer* Star::getStarLayer(){
	return _starlayer;
}