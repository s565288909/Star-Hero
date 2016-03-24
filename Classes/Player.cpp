#include "Player.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;

using namespace cocostudio::timeline;


Player::Player(){
	if (Instance == nullptr)
	{
		Instance = this;
	}
}

Player::~Player(){}

//static Player* _instance = nullptr;
//Player* Player::getInstance(){
//
//}

void Player::initData(){
	HP = 100;
	MP = 100;
	NL = 100;
	isDead = false;
	m_WalkState = WalkStop;
	//¼ÓÔØ¶¯»­
	_action = CSLoader::createTimeline("Node/Player.csb");
}

void Player::setNode(Node* node){
	this->m_Node = node;
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


