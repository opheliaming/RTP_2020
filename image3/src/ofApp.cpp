#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    img.load("ML.png");
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int x =0; x<img.getWidth(); x++){
        for (int y=0; y<img.getHeight();y++){
            pixel[x][y] = int(img.getColor(x,y).getBrightness());
        }
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
        for (int x =0; x<img.getWidth(); x++){
            for (int y=0; y<img.getHeight();y++){
                int num = 7;
                int oldpixel = pixel[x][y];
                int newpixel = (oldpixel*num/255)/num;
                pixel[x][y] = newpixel;
                int err = oldpixel - newpixel;
                pixel[x + 1][y] = pixel[x + 1][y] + err * 7 / 16;
                pixel[x - 1][y + 1] = pixel[x - 1][y + 1] + err * 3 / 16;
                pixel[x][y + 1] = pixel[x][y + 1] + err * 5 / 16;
                pixel[x + 1][y + 1] = pixel[x + 1][y + 1] + err * 1 / 16;
                float width = 650/img.getWidth();
                ofSetColor(newpixel);
                ofDrawRectangle(x, y, width,width);
            }
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
