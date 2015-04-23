//
//  Bubble.cpp
//  learningBubbles
//
//  Created by Jinnie Templin on 4/15/15.
//
//

#include "Bubble.h"

Bubble::Bubble() {
    
    pos = ofVec2f(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    vel = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));
    rad = 10;
    myColor = ofColor(ofRandom(255),ofRandom(255),ofRandom(255));
    rot = 0;
    
}
void Bubble::setup(float _x, float _y){
    pos = ofVec2f(_x, _y);
    birth = pos;
    
}
void Bubble::update(){
    pos+=vel;
    rot+=abs(vel.x);
    float distance = ofDist(birth.x, birth.y, pos.x, pos.y);
    float bright = ofMap(distance, 0, 500, 255, 0);
    myColor.a = bright;
}
void Bubble::draw(){
    ofSetColor(myColor);
    ofPushMatrix();
    ofTranslate(pos);
    ofRotate(rot);
    ofCircle(0,0, rad);
    ofPopMatrix();
}