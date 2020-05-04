/*This cpp file is used to make a class 'Chat' that is only used for defining the functions
having their implementation in another cpp file 'Chat.cpp' */
#include"pch.h"
#include "stdafx.h" 
#include <iostream>
#include <fstream>

using namespace std;

class Chat {
public:
	void color(int c);
	void Intro();//void  respond_by_Bot(string phrase);    // Used to get, or teach a response to the bot
	void say_by_User(string phrase); 
	void help();// Used to textually communicate with Bot
	void accessfirst(string word);
	void level();
    void respond1(string new1);
	void respond2(string new3);
	void respond3(string new4);
	void show1();
	void last();

	
};

#pragma once
#pragma once
