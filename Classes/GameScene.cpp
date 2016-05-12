//
//  GameScene.cpp
//  StarHero
//
//  Created by 史潇 on 16/3/20.
//
//

#include "GameScene.hpp"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "UIClassReader.hpp"
#include "cocostudio/CCComExtensionData.h"

USING_NS_CC;

using namespace cocostudio::timeline;

Scene* GameScene::createScene()
{
    auto scene = Scene::create();
    auto layer = GameScene::create();
    
    scene->addChild(layer);
    return scene;
}

bool GameScene::init()
{
    if (!Layer::init()) {
        return false;
    }

    CSLoader* instance = CSLoader::getInstance();
    instance->registReaderObject("UIClassReader",(ObjectFactory::Instance)UIClassReader::getInstance);
    
    auto gamescene = CSLoader::createNode("Scene/GameScene.csb");
    addChild(gamescene);

	_player = Player::getInstance();
	_player->setNode(gamescene->getChildByName("Player"));

	_starLayer = new Star((Layer*)gamescene->getChildByName("StarLayer"));

	this->scheduleUpdate();
    return true;
}

void GameScene::update(float delta){
	RotateStar();
}

void GameScene::RotateStar(){
	switch (_player->m_WalkState)
	{
	case Player::WalkLeft:
		moveL = true;
		break;
	case Player::WalkRight:
		moveR = true;
		break;
	case Player::WalkStop:
		moveL = moveR = false;
		break;
	}
	_starLayer->rotateStar(moveL, moveR);
}
