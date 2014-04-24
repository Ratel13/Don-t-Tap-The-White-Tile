#ifndef __Script_H__
#define __Script_H__

#include "VisibleRect.h"
#include "cocos2d.h"
/*
const static cocos2d::Size screenSize_macro = VisibleRect::getVisibleRect().size;
const static float screenHeight = VisibleRect::getVisibleRect().size.height;
 */

//MainMenu
const static float bigTitleSize_macro = 15.0f;

const static float  smallTitleSize_macro = 15.0f;

//GameScene
#define clickBlackEffect_macro "touch.m4a"
#define clickWhiteEffect_macro "error.m4a"

const static float rectScrollSpeed_macro = 15.0f;
const static float verticalNum_macro = 5.0f;
const static float horizontalNum_macro = 4.0f;


#endif

