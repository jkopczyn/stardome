#pragma once

#include "ofMain.h"
#include "LedMatrix.h"
#include "OpenPixelClient.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        void exit();

		virtual void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
  private:
    OpenPixel::Client* opcClient;
    LedMatrix strips;
    ofVideoPlayer myPlayer;

    ofPath ledOverlay;
    float brightness;
    float speed;
};
