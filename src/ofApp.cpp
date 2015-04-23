#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(3);
}

//--------------------------------------------------------------
void ofApp::update(){
    Bubble tempBubble;
    tempBubble.setup(ofGetMouseX(), ofGetMouseY());
    bubbles.push_back(tempBubble);
    for(int i=0; i<bubbles.size(); i++){
        //bubbles[i].vel = ofVec2f(ofRandom(-4, 4), ofRandom(-10, 10));
        bubbles[i].update();
        float distance = ofDist(bubbles[i].birth.x, bubbles[i].birth.y, bubbles[i].pos.x , bubbles[i].pos.y);
        //this equation erases bubble instances after they go off the screen so the program doesn't keep trying to draw them
        if (distance>500){
            bubbles.erase(bubbles.begin()+i);
            i--;  //if we don't do this here, we'll skip the next bubble in this update
        }
    }
    Box tempBox;
    tempBox.setup(ofGetWindowWidth()/2, ofGetWindowHeight());
    boxes.push_back(tempBox);
    for(int i=0; i<boxes.size(); i++){
        boxes[i].update();
        float distance = ofDist(boxes[i].birth.x, boxes[i].birth.y, boxes[i].pos.x , boxes[i].pos.y);
        if (distance>500){
            boxes.erase(boxes.begin()+i);
            i--;
        }

    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0; i<bubbles.size(); i++){
        bubbles[i].draw();
    }
    for(int i=0; i<boxes.size(); i++){
        boxes[i].draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
