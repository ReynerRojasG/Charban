#pragma once
#include <iostream>
#include <chrono>
#include <thread>
#include <conio.h>
#include "MediaPlayer.h"
class Views
{
private:
	MediaPlayer music;
public:
	void delay(int milliseconds);
	void charBan();
	void menuVariants(int opt);
	void title();
	int showMenu();
	void controlsInfo();
	void transition();
	bool autoPlay();
	void dead();
	void exit();

};

/*
	void delay(int milliseconds) {
		
	}
	void charBan() {
	
	}
	void menuVariants(int opt) {
		
	}
	void title() {

		
	}
	int showMenu() {
		
	}
	void controlsInfo() {
		
	}
	void transition() {
		
	}
	bool autoPlay() {
		
	}
	void dead() {
		
	}
	void exit() {
		
	}
*/