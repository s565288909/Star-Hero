//
//  Player1.hpp
//  StarHero
//
//  Created by 史潇 on 16/3/27.
//
//

#ifndef Player_hpp
#define Player_hpp

#include "cocos2d.h"
#include "Enity.h"
#include <cocostudio/CocoStudio.h>

class Player : public Enity
{
public:
    Player();
    ~Player();
    static Player* getInstance();
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

#endif /* Player_hpp */
