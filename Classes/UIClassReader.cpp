//
//  UIClassReader.cpp
//  StarHero
//
//  Created by 史潇 on 16/3/22.
//
//

#include "UIClassReader.hpp"
#include "UIClass.hpp"

USING_NS_CC;

static UIClassReader* _instanceUIClassReader = nullptr;
UIClassReader* UIClassReader::getInstance()
{
    if (!_instanceUIClassReader)
    {
        _instanceUIClassReader = new UIClassReader();
    }
    return _instanceUIClassReader;
}

void UIClassReader::purge()
{
    CC_SAFE_DELETE(_instanceUIClassReader);
}

Node* UIClassReader::createNodeWithFlatBuffers(const flatbuffers::Table *nodeOptions)
{
    UIClass* node = UIClass::create();
    setPropsWithFlatBuffers(node, nodeOptions);
    return node;
}
