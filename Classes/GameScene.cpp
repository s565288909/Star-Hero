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

	

    return true;
}
