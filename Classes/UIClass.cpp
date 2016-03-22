//
//  UIClass.cpp
//  StarHero
//
//  Created by 史潇 on 16/3/22.
//
//

#include "UIClass.hpp"
#include "ui/UIText.h" 

USING_NS_CC;
using namespace std;
using namespace cocos2d::ui;

UIClass::UIClass(){}

Widget::ccWidgetTouchCallback UIClass::onLocateTouchCallback(const string &callBackName)
{
    if (callBackName == "onTouch")//判断事件名，返回对应的函数。下同
    {
        return CC_CALLBACK_2(UIClass::onTouch, this);
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

void UIClass::onTouch(cocos2d::Ref* object, cocos2d::ui::Widget::TouchEventType type)
{
    CCLOG("onTouch");
}

void UIClass::onClick(cocos2d::Ref* sender)
{
    CCLOG("onClick");
}

void UIClass::onEvent(cocos2d::Ref* sender, int eventType)
{
    CCLOG("onEvent");
}
