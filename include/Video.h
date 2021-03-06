/* 
 * File:   Video.h
 * Author: Dreamszhu
 *
 * Created on October 17, 2014, 10:52 AM
 */

#ifndef VIDEO_H
#define	VIDEO_H

#include <iostream>

#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

#include "raknet/MessageIdentifiers.h"
#include "raknet/RakPeerInterface.h"
#include "raknet/RakNetTypes.h"
#include "raknet/RakString.h"
#include "raknet/BitStream.h"

class Video {
public:
	Video();
	virtual ~Video();

	void run(const char* ip);
private:
	cv::VideoCapture capture;
	int alpha_slider;
};

#endif	/* VIDEO_H */

