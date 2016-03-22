//
//  GameScene.hpp
//  StarHero
//
//  Created by 史潇 on 16/3/20.
//
//

#ifndef GameScene_hpp
#define GameScene_hpp

#include <cocos2d.h>

class GameScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    virtual bool init();
    CREATE_FUNC(GameScene);
};


#endif /* GameScene_hpp */
