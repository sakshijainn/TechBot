#include"pch.h"
#include "stdafx.h" 
#include "Chat.h"
#include <iostream>
#include <fstream>
#include<string>
#include<Windows.h>
#include <shellapi.h>
#include <tchar.h>
#include<stdlib.h>
#include<stdio.h>





using namespace std;
/*
	The following function will look for the passed phrase in the memory file.
	If there is a match, the accompanying response, stored below the initial phrase,
	will be outputed.
	If the response cannot be found, the learner will repeat the phrase, and prompt
	the user to enter an ideal response. This response will be stored in the memory
	file along with the initial phrase.

*/
void Chat::color(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void Chat::Intro()
{

	fstream f1;
	string line;
	f1.open("Intro.txt", ios::in);
	if (!f1.eof())
	{
		while (getline(f1, line))
		{
			color(6);
			cout << line << '\n';
		}
		f1.close();
	}
}

void Chat::say_by_User(string Phrase)
{
	cout << "Hey"<<" "<<Phrase<<"\n";
	 
}

void Chat::help()
{
	fstream f3;
	string line;
	f3.open("help.txt", ios::in);
	if (!f3.eof())
	{
		while (getline(f3, line))
		{
			color(6);
			cout << line << '\n';
		}
		f3.close();
	}
}

//done

void Chat::accessfirst(string word)
{
	//ifstream mFile;
	//mFile.open("C:/Users/Sakshi jain/source/repos/final/final/examplee.txt", ios::in);
	//if (!mFile.is_open()) return;
	string line;
	if (word == "python"||word=="Python"||word=="PYTHON")
	{
		fstream f4;
		f4.open("python.txt", ios::in);
		if (!f4.eof())
		{
			while (getline(f4, line))
			{
				color(8);
				cout << line << '\n';
			}
		}
		f4.close();
	}
	else if (word == "java"||word=="Java"||word=="JAVA")
	{
		fstream f4;
		f4.open("java.txt", ios::in);
		if (!f4.eof())
		{
			while (getline(f4, line))
			{
				color(8);
				cout << line << '\n';
			}
		}
		f4.close();
	}
	else if (word == "c++"||word=="C++")
	{
		fstream f4;
		f4.open("c++.txt", ios::in);
		if (!f4.eof())
		{
			while (getline(f4, line))
			{
				color(8);
				cout << line << '\n';
			}
		}
		f4.close();
	}
	else if (word == "c" || word == "C")
	{
		fstream f4;
		f4.open("c.txt", ios::in);
		if (!f4.eof())
		{
			while (getline(f4, line))
			{
				color(8);
				cout << line << '\n';
			}
		}
		f4.close();
	}
	else if (word == "JavaScript" || word == "JAVASCRIPT"||word=="javascript"||word=="Javascript"||word=="javaScript")
	{
		fstream f4;
		f4.open("javascript.txt", ios::in);
		if (!f4.eof())
		{
			while (getline(f4, line))
			{
				color(8);
				cout << line << '\n';
			}
		}
		f4.close();
	}
	else
	{
		cout << "Techbot Out Of Service";
	}
}


void Chat::level()
{
	fstream f5;
	string line;
	f5.open("level.txt", ios::in);
	if (!f5.eof())
	{
		while (getline(f5, line))
		{
			color(6);
			cout << line << '\n';
		}
		f5.close();
	}
}


void Chat::respond1(string new1)
{
	fstream f5;
	string line;
	f5.open("beg.txt", ios::in);
	if (new1 == "BEGINNER" || new1 == "beginner" || new1 == "Beginner")
	{
		if (!f5.eof())
		{
			while (getline(f5, line))
			{
				color(6);
				cout << line << '\n';
			}
			f5.close();
		}
	}
}

void Chat::respond2(string new1)
{
	fstream f5;
	string line;
	f5.open("inter.txt", ios::in);
	if (new1 == "INTERMEDIATE" || new1 == "intermediate" || new1 == "Intermediate")
	{
		if (!f5.eof())
		{
			while (getline(f5, line))
			{
				color(6);
				cout << line << '\n';
			}
			f5.close();
		}
	}
}

void Chat::respond3(string new1)
{
	fstream f5;
	string line;
	f5.open("skill.txt", ios::in);
	if (new1 == "SKILLED" || new1 == "skilled" || new1 == "Skilled")
	{
		if (!f5.eof())
		{
			while (getline(f5, line))
			{
				color(6);
				cout << line << '\n';
			}
			f5.close();
		}
	}
}


void Chat::show1()
{
	fstream f5;
	string line;
	f5.open("course.txt", ios::in);
	
		if (!f5.eof())
		{
			while (getline(f5, line))
			{
				color(6);
				cout << line << '\n';
			}
			f5.close();
		}
	
}

void Chat::last()
{
	fstream f5;
	string line;
	f5.open("last.txt", ios::in);

	if (!f5.eof())
	{
		while (getline(f5, line))
		{
			color(6);
			cout << line << '\n';
		}
		f5.close();
	}

}


