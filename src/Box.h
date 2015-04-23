//
//  Box.h
//  learningBubbles
//
//  Created by Jinnie Templin on 4/20/15.
//
//

#ifndef __learningBubbles__Box__
#define __learningBubbles__Box__

#include <ofMain.h>
class Box {
public: Box();

void setup(float _x, float _y);
void update();
void draw();

ofVec2f pos;
ofVec2f vel;
float rad;
ofColor myColor;
float rot;
ofVec2f birth;
float bw;
float bh;
};

#endif /* defined(__learningBubbles__Box__) */
