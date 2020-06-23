#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    img.load("ML1.png");
    ofTrueTypeFontSettings settingsCn("CP-Font-morisawa-edited.ttf", 150);
    settingsCn.antialiased = true;
    settingsCn.contours = true;
    settingsCn.dpi = 72;
    settingsCn.addRanges(ofAlphabet::Japanese);
    font.load(settingsCn);
    font.setLetterSpacing(0.98);

}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    ofSetColor(0);
    string text = "モリサワ";
    font.drawStringAsShapes(text, 10,130);
    ofSetColor(255);
    img.draw(10,142);
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
