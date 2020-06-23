#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    img.load("ML.png");
    int factor = 1;
    mona.allocate(img.getWidth(),img.getHeight(),OF_IMAGE_COLOR);
    for(int i = 0; i < img.getWidth();i++){
      for(int j = 0; j < img.getHeight();j++){
        int i_m_1 = ofClamp(i-1, 0, img.getWidth()-1);
        int i_p_1 = ofClamp(i+1, 0, img.getWidth()-1);
        int j_m_1 = ofClamp(j-1, 0, img.getHeight()-1);
        int j_p_1 = ofClamp(j+1, 0, img.getHeight()-1);
        int m = int(img.getColor(i,j).getBrightness());
        int n_ = int(img.getColor(i,j_p_1).getBrightness());
        int ne = int(img.getColor(i_p_1,j_p_1).getBrightness());
        int e_ = int(img.getColor(i_p_1,j).getBrightness());
        int se = int(img.getColor(i_p_1,j_m_1).getBrightness());
        int s_ = int(img.getColor(i,j_m_1).getBrightness());
        int sw = int(img.getColor(i_m_1,j_m_1).getBrightness());
        int w_ = int(img.getColor(i_m_1,j).getBrightness());
        int nw = int(img.getColor(i_m_1,j_p_1).getBrightness());
        int oldpixel = int(img.getColor(i,j).getBrightness());
        int newpixel = (oldpixel*factor/255) *(255/factor);   //find_closest_palette_color
        int err = oldpixel - newpixel;
          
        mona.setColor(i,j, newpixel);
        mona.setColor(i_p_1,j, e_ + err * 7 / 16 );
        mona.setColor(i_m_1,j_p_1, nw + err * 3 / 16);
        mona.setColor(i,j_p_1, n_+err * 5 / 16);
        mona.setColor(i_p_1,j_p_1, ne+ err * 1 / 16);
      }
    }
    mona.update();
}

//----------------------------1----------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    mona.draw(0,0);
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
