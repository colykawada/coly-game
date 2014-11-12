//
//  GameScene.h
//  nyan25
//
//  Created by 川田茂樹 on 2014/11/11.
//
//

#ifndef __GAME_SCENE_H__
#define __GAME_SCENE_H__

#include "cocos2d.h"

class GameScene : public cocos2d::Layer
{
    private:
    void makeBackground();
    
    public:
        virtual bool init();
        static cocos2d::Scene* scene();
        CREATE_FUNC(GameScene);
};

#endif /* __GAME_SCENE_H__ */
