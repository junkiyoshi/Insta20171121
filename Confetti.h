#pragma once
#include "ofMain.h"

class Confetti
{
public:
	Confetti();
	~Confetti() {};

	void update();
	void draw();
private:
	ofVec3f location;
	ofVec3f velocity;
	ofVec3f rotate;
	ofColor body_color;
};