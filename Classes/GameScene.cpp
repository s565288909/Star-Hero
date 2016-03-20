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
    
    auto gamescene = CSLoader::createNode("Scene/GameScene.csb");
    addChild(gamescene);
    
    return true;
}
