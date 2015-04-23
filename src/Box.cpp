//
//  Box.cpp
//  learningBubbles
//
//  Created by Jinnie Templin on 4/20/15.
//
//

#include "Box.h"
Box::Box() {
    
    pos = ofVec2f(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    vel = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));
    rad = 10;
    myColor = ofColor(ofRandom(255),ofRandom(255),ofRandom(255));
    rot = 0;
    bw = 10;
    bh = 10;
    
}
void Box::setup(float _x, float _y){
    pos = ofVec2f(_x, _y);
    birth = pos;
    
}
void Box::update(){
    pos+=vel;
    rot+=abs(vel.x);

    float distance = ofDist(birth.x, birth.y, pos.x, pos.y);
    float bright = ofMap(distance, 0, 500, 255, 0);
    myColor.a = bright;
}
void Box::draw(){
    ofSetColor(myColor);
    ofPushMatrix();
    ofTranslate(pos);
    ofRotate(rot);
    ofRect(0, 0,  bw, bh);
    ofPopMatrix();
}