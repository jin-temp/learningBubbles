//
//  Bubble.h
//  learningBubbles
//
//  Created by Jinnie Templin on 4/15/15.
//
//

#ifndef __learningBubbles__Bubble__
#define __learningBubbles__Bubble__

#include <ofMain.h>

class Bubble {

    
public:
    Bubble();
    
    void setup(float _x, float _y);
    void update();
    void draw();
    
    ofVec2f pos;
    ofVec2f vel;
    float rad;
    ofColor myColor;
    float rot;
    ofVec2f birth;
    
   
    
};


#endif /* defined(__learningBubbles__Bubble__) */
