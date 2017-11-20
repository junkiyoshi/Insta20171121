#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetFrameRate(60);
	ofBackground(0);
	ofSetWindowTitle("Insta");

	ofEnableDepthTest();

	for (int i = 0; i < 1024; i++) {
		this->confetti.push_back(shared_ptr<Confetti>(new Confetti()));
	}
}

//--------------------------------------------------------------
void ofApp::update() {
	for (int i = 0; i < this->confetti.size(); i++) {
		this->confetti[i]->update();
	}
}

//--------------------------------------------------------------
void ofApp::draw() {
	this->cam.begin();
	ofTranslate(0, 0, -ofGetWidth() / 2);
	ofRotateZ(180);
	ofTranslate(-ofGetWidth() / 2, -ofGetHeight() / 2);

	for (int i = 0; i < this->confetti.size(); i++) {
		this->confetti[i]->draw();
	}

	this->cam.end();
}

//--------------------------------------------------------------
int main() {
	ofSetupOpenGL(720, 720, OF_WINDOW);
	ofRunApp(new ofApp());
}