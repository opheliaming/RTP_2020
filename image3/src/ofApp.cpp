#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    img.load("ML.png");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
        ofSeedRandom(3);
        ofColor c1;
        float r = ofRandom(0,5);
        for (int i =0; i<img.getWidth(); i++){
            for (int j=0; j<img.getHeight();j++){
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
                
    //            if (n_==e_==s_==w_){c1=m;}
    //            else{
                int result = ofClamp(-1*n_ + -1*w_ + -1*s_ + -1*e_ +5*m,0,255);
                int random = 70;
                int num_random =  7;
                int result_ = ofMap(int(result+ofRandom(-1*random,random)),-1*random,255+random,0,num_random);
                //float norm_result = ofMap(ofNormalize(result,0,255),0,1,0,255);
                //float k = ofRandom(0,50);
                //ofColor color = img.getColor(i,j);
                //int brightness = int(color.getBrightness());
                if((i%133==0 and j%111==0) or result_<2.5){
                    c1 = ofColor(0);
                }
                else if((i%137==0 and j%57==0) or result_>4){
                    if (r<2){c1 = ofColor(240);}
                    else{c1 = ofColor(255);}
                }
                else{
                    c1 = ofMap(result_,0,num_random,0,255);
                }
                float width = 650/img.getWidth();
                ofSetColor(c1);
                ofDrawRectangle(i, j, width,width);
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
