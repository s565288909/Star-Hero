//
//  Star.hpp
//  StarHero
//
//  Created by 史潇 on 16/4/3.
//
//

#ifndef Star_hpp
#define Star_hpp

#include <cocos2d.h>

class Star : public cocos2d::CCObject
{
public:
	Star(cocos2d::Layer* layer);
	~Star();
	cocos2d::Layer* getStarLayer();
private:
	cocos2d::Layer* _starlayer;
	void initData();
};

#endif /* Star_hpp */
