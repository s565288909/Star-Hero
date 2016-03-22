//
//  UIClassReader.hpp
//  StarHero
//
//  Created by 史潇 on 16/3/22.
//
//

#ifndef UIClassReader_hpp
#define UIClassReader_hpp

#include <cocos2d.h>
#include "cocostudio/CocosStudioExport.h"
#include "cocostudio/WidgetReader/NodeReader/NodeReader.h"

class UIClassReader : public cocostudio::NodeReader
{
public:
    UIClassReader() {};
    ~UIClassReader() {};
    static UIClassReader* getInstance();
    static void purge();
    cocos2d::Node* createNodeWithFlatBuffers(const flatbuffers::Table* nodeOptions);
};

#endif /* UIClassReader_hpp */
