//
//  UIClass.cpp
//  StarHero
//
//  Created by 史潇 on 16/3/22.
//
//

#include "UIClass.hpp"
#include "ui/UIText.h"
#include "Player.h"

USING_NS_CC;
using namespace std;
using namespace cocos2d::ui;

UIClass::UIClass(){}

Widget::ccWidgetTouchCallback UIClass::onLocateTouchCallback(const string &callBackName)
{
    if (callBackName == "onRightBtTouch")//判断事件名，返回对应的函数。下同
    {
		return CC_CALLBACK_2(UIClass::onRightBtTouch, this);
    }
	else if (callBackName == "onLeftBtTouch")//判断事件名，返回对应的函数。下同
	{
		return CC_CALLBACK_2(UIClass::onLeftBtTouch, this);
	}
    return nullptr;
}

Widget::ccWidgetClickCallback UIClass::onLocateClickCallback(const string &callBackName)
{
    if (callBackName == "onClick")
    {
        return CC_CALLBACK_1(UIClass::onClick, this);
    }
    return nullptr;
}

Widget::ccWidgetEventCallback UIClass::onLocateEventCallback(const string &callBackName)
{
    if (callBackName == "onEvent")
    {
        return CC_CALLBACK_2(UIClass::onEvent, this);
    }
    return nullptr;
}

void UIClass::onRightBtTouch(cocos2d::Ref* object, cocos2d::ui::Widget::TouchEventType type)
{
    CCLOG("onTouch");
	switch (type)
	{
	case cocos2d::ui::Widget::TouchEventType::BEGAN:
		Player::Instance->moveRight();
		break;
	case cocos2d::ui::Widget::TouchEventType::MOVED:
		break;
	case cocos2d::ui::Widget::TouchEventType::ENDED:
		Player::Instance->stopMove();
		break;
	case cocos2d::ui::Widget::TouchEventType::CANCELED:
		break;
	default:
		break;
	}
}

void UIClass::onLeftBtTouch(cocos2d::Ref* object, cocos2d::ui::Widget::TouchEventType type)
{
	CCLOG("onTouch");
	switch (type)
	{
	case cocos2d::ui::Widget::TouchEventType::BEGAN:
		Player::Instance->moveLeft();
		break;
	case cocos2d::ui::Widget::TouchEventType::MOVED:
		break;
	case cocos2d::ui::Widget::TouchEventType::ENDED:
		Player::Instance->stopMove();
		break;
	case cocos2d::ui::Widget::TouchEventType::CANCELED:
		break;
	default:
		break;
	}
}

void UIClass::onClick(cocos2d::Ref* sender)
{
    CCLOG("onClick");
}

void UIClass::onEvent(cocos2d::Ref* sender, int eventType)
{
    CCLOG("onEvent");
}
