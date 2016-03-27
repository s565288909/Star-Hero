//
//  Player1.cpp
//  StarHero
//
//  Created by 史潇 on 16/3/27.
//
//

#include "Player.hpp"

USING_NS_CC;

using namespace cocostudio::timeline;

Player::Player(){}

Player::~Player(){}

bool Player::init(){
    initData();
    return true;
}

static Player* _instance = nullptr;
Player* Player::getInstance() {
    if (_instance==nullptr) {
        _instance = new Player();
    }
    return _instance;
}

void Player::initData(){
    HP = 100;
    MP = 100;
    NL = 100;
    m_WalkState = WalkStop;
    _action = CSLoader::createTimeline("Node/Player.csb");
}

void Player::setNode(Node* node){
    this->m_Node = node;
    m_Node->getChildByName("Left")->setVisible(false);
    m_Node->getChildByName("Right")->setVisible(true);
}

void Player::moveLeft(){
    m_Node->getChildByName("Left")->setVisible(true);
    m_Node->getChildByName("Right")->setVisible(false);
    _action->gotoFrameAndPlay(0, 32, true);
    m_WalkState = WalkLeft;
}

void Player::moveRight(){
    m_Node->getChildByName("Left")->setVisible(false);
    m_Node->getChildByName("Right")->setVisible(true);
    _action->gotoFrameAndPlay(40,72,true);
    m_WalkState = WalkRight;
}

void Player::stopMove(){
    _action->pause();
    m_WalkState = WalkStop;
}


