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
#include <Player.hpp>
#include <Star.hpp>

class GameScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    virtual bool init();
    CREATE_FUNC(GameScene);
	virtual void update(float delta);
	void RotateStar();
private:
    Player* _player;
	Star* _starLayer;
	bool moveL = false, moveR = false;
};


#endif /* GameScene_hpp */
