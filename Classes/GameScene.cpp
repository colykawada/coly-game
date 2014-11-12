//
//  GameScene.cpp
//  nyan25
//
//  Created by 川田茂樹 on 2014/11/11.
//
//

#include "GameScene.h"

using namespace cocos2d;
using namespace std;

Scene* GameScene::scene()
{
    Scene* scene = Scene::create();
    GameScene* layer = GameScene::create();
    scene->addChild(layer);
    
    return scene;
}

bool GameScene::init()
{
    if(!Layer::init())
    {
        return false;
    }
    
    //背景を作成する
    makeBackground();
    
    return true;
}

//背景を作成する
void GameScene::makeBackground()
{
    //画面サイズを取得
    Size winSize = Director::getInstance()->getWinSize();
    //Size winSize = Director::getInstance()->getVisibleSize();
    
    //背景を生成
    Sprite* pBG = Sprite::create("background.png");
    pBG->setPosition(Point(winSize.width * 0.5, winSize.height * 0.5));
    this->addChild(pBG);
}