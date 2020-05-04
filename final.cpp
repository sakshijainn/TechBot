#include"pch.h"
#include "stdafx.h" 
#include <iostream>
#include "Chat.h"
#include<string>
#include<Windows.h>
#include<stdio.h>
#include<tchar.h>
#include<opencv2\opencv.hpp>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui/highgui.hpp>








using namespace cv;
using namespace std;

int main()
{
	Mat image;


	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	system("color 78");
	Chat AI;
	system("Color 0A");
	cout << "Tech-Bot: ";
	AI.Intro();
	cout << endl;
	AI.color(12);
	cout.width(100);


	cout << "User:";
	string phrase;
	AI.color(15);
	getline(cin, phrase);
	AI.color(2);


	cout << "Techbot:";
	AI.color(12);
	AI.say_by_User(phrase);
	AI.color(12);
	cout << endl;
	AI.help();
	AI.color(12);
	cout << endl;
	cout.width(100);

	//done

	string word;
	//ofstream myFile;
	//const char *path = "C:/Users/Sakshi jain/source/repos/final/final/examplee.txt";
	//myFile.open(path,ios::out);
	cout << "User:";
	AI.color(15);
	getline(cin, word);
	AI.color(2);
	cout << endl;


	cout << "Tech-Bot:";
	AI.accessfirst(word);
	AI.color(12);
	cout << endl;


	SetConsoleTextAttribute(color, 10);
	cout << "Tech-Bot:";
	AI.level();
	AI.color(12);
	cout << endl;
	cout.width(100);


	string new1;
	cout << "User:";
	AI.color(15);
	getline(cin, new1);
	AI.color(2);
	cout << endl;


	SetConsoleTextAttribute(color, 10);
	cout << "Tech-Bot:";
	if (new1 == "beginner" || new1 == "BEGINNER" || new1 == "Beginner")
	{
		AI.respond1(new1);
	}
	else if (new1 == "intermediate" || new1 == "INTERMEDIATE" || new1 == "Intermediate")
	{
		AI.respond2(new1);
	}
	else if(new1=="skilled"||new1=="SKILLED"||new1=="Skilled")
	{
		AI.respond3(new1);
	}
	else
	{
		cout << "TECHBOT DOESNT SUPPORT ANY OTHER LEVEL";
	}
	AI.color(12);
	cout << endl;
	cout.width(100);

	string new2;
	cout << "User:";
	AI.color(15);
	getline(cin, new2);
	AI.color(2);
	cout << endl;


	//beginner-courses
	char burl[100] = "https://codecondo.com/10-best-java-programming-blogs-to-follow/";
	char burl1[100] = "https://medium.com/@puthnith/c-programming-from-0-to-1-c18d1c431f06";
	char burl2[100] = "https://medium.com/@CPP_Coder/c-in-the-modern-world-ce6f470dfbe0";
	char burl3[100] = "https://techburst.io/python-top-10-articles-june-2018-fb96d87f66b7";
	char burl4[200] = "https://hackernoon.com/top-200-javascript-articles-on-medium-until-jan-2017-a0c6a1bfe094?gi=33dedba0d3eb";
	SetConsoleTextAttribute(color, 10);
	cout << "Tech-Bot:";
if (new1 == "BEGINNER" || new1 == "beginner" || new1 == "Beginner")
	{
		//cout << endl;
		//char url[100] ;
		if (new2 == "courses" || new2 == "COURSES" || new2 == "Courses")
		{
			AI.show1();
		}
		else
		{
			if (word == "java" || word == "JAVA" || word == "Java")
			{
				if (new2 == "TECH-ARTICLES" || new2 == "Tech-articles" || new2 == "techarticles" || new2 == "tech-articles")
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
					cout << "You chose to see inspiring tech-blogs you can follow highly!" << "\n";
					cout << "     ******* DIRECTING YOU TO THE WEBPAGE******";
					cout << endl;
					ShellExecute(NULL, _T("open"), burl, NULL, NULL, SW_SHOWNORMAL);
				}

			}
			else if (word == "c" || word == "C")
			{
				if (new2 == "TECH-ARTICLES" || new2 == "Tech-articles" || new2 == "techarticles" || new2 == "tech-articles")
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
					cout << "You chose to see inspiring tech-blogs you can follow highly!" << "\n";
					cout << "     ******* DIRECTING YOU TO THE WEBPAGE******";
					cout << endl;
					ShellExecute(NULL, _T("open"), burl1, NULL, NULL, SW_SHOWNORMAL);
				}

			}
			else if (word == "c++" || word == "C++")
			{
				if (new2 == "TECH-ARTICLES" || new2 == "Tech-articles" || new2 == "techarticles" || new2 == "tech-articles")
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
					cout << "You chose to see inspiring tech-blogs you can follow highly!" << "\n";
					cout << "     ******* DIRECTING YOU TO THE WEBPAGE******";
					cout << endl;
					ShellExecute(NULL, _T("open"), burl2, NULL, NULL, SW_SHOWNORMAL);
				}

			}
			else if (word == "python" || word == "PYTHON" || word == "Python")
			{
				if (new2 == "TECH-ARTICLES" || new2 == "Tech-articles" || new2 == "techarticles" || new2 == "tech-articles")
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
					cout << "You chose to see inspiring tech-blogs you can follow highly!" << "\n";
					cout << "     ******* DIRECTING YOU TO THE WEBPAGE******";
					cout << endl;
					ShellExecute(NULL, _T("open"), burl3, NULL, NULL, SW_SHOWNORMAL);
				}

			}
			else if (word == "javascript" || word == "JAVASCRIPT" || word == "JavaScript" || word == "JavaScript" || word == "javaScript")
			{
				if (new2 == "TECH-ARTICLES" || new2 == "Tech-articles" || new2 == "techarticles" || new2 == "tech-articles")
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
					cout << "You chose to see inspiring tech-blogs you can follow highly!" << "\n";
					cout << "     ******* DIRECTING YOU TO THE WEBPAGE******";
					cout << endl;
					ShellExecute(NULL, _T("open"), burl4, NULL, NULL, SW_SHOWNORMAL);
				}

			}

		}
	}
else if (new1 == "intermediate" || new1 == "INTERMEDIATE" || new1 == "Intermediate")
	{
		if (word == "c++" || word == "C++")
		{
			if (new2 == "TECH-PROJECTS" || new2 == "Tech-Projects" || new2 == "Tech-projects" || new2 == "tech-projects")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				cout << "You chose to see exciting project ideas you can start with!" << "\n";
				cout << "     ******* DIRECTING YOU TO THE IMAGE OF IT******";
				cout << endl;
				image = imread("image1.jpg");
				if (image.empty())
				{
					cout << "\n TECHBOT IS UNABLE TO FIND IMAGE";
					system("pause");
					return -1;
				}
				namedWindow("Image_Window");
				imshow("Image_Window", image);
				waitKey(0);

				destroyWindow("Image_Window");
				return 0;
			}
			else if (new2 == "frameworks"||new2=="FRAMEWORKS"||new2=="FrameWorks"||new2=="Frameworks")
			{
				char curl[100] = "https://github.com/fffaraz/awesome-cpp";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				cout << "You chose to see a platform providing a list of extended frameworks for C++!" << "\n";
				cout << "     ******* DIRECTING YOU TO THE WEBPAGE******";
				cout << endl;
				cout << endl;
				ShellExecute(NULL, _T("open"), curl, NULL, NULL, SW_SHOWNORMAL);

			}
		}
		else if (word == "java" || word == "JAVA" || word == "Java")
		{
			if (new2 == "TECH-PROJECTS" || new2 == "Tech-Projects" || new2 == "Tech-projects" || new2 == "tech-projects")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				cout << "You chose to see exciting project ideas you can start with!" << "\n";
				cout << "     ******* DIRECTING YOU TO THE IMAGE OF IT******";
				cout << endl;
				image = imread("image2.jpg");
				if (image.empty())
				{
					cout << "\n TECHBOT IS UNABLE TO FIND IMAGE";
					system("pause");
					return -1;
				}
				namedWindow("Image_Window");
				imshow("Image_Window", image);
				waitKey(0);

				destroyWindow("Image_Window");
				return 0;
			}
			else if (new2 == "frameworks" || new2 == "FRAMEWORKS" || new2 == "FrameWorks" || new2 == "Frameworks")
			{
				char curl1[100] = "https://raygun.com/blog/popular-java-frameworks/";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				cout << "You chose to see a platform providing a list of extended frameworks for C++!" << "\n";
				cout << "     ******* DIRECTING YOU TO THE WEBPAGE******";
				cout << endl;
				cout << endl;
				ShellExecute(NULL, _T("open"), curl1, NULL, NULL, SW_SHOWNORMAL);

			}
		}
		else if (word == "python" || word == "PYTHON" || word == "Python")
		{
			if (new2 == "TECH-PROJECTS" || new2 == "Tech-Projects" || new2 == "Tech-projects" || new2 == "tech-projects")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				cout << "You chose to see exciting project ideas you can start with!" << "\n";
				cout << "     ******* DIRECTING YOU TO THE IMAGE OF IT******";
				cout << endl;
				image = imread("image3.jpg");
				if (image.empty())
				{
					cout << "\n TECHBOT IS UNABLE TO FIND IMAGE";
					system("pause");
					return -1;
				}
				namedWindow("Image_Window");
				imshow("Image_Window", image);
				waitKey(0);

				destroyWindow("Image_Window");
				return 0;
			}
			else if (new2 == "frameworks" || new2 == "FRAMEWORKS" || new2 == "FrameWorks" || new2 == "Frameworks")
			{
				char curl2[100] = "https://hackernoon.com/top-10-python-web-frameworks-to-learn-in-2018-b2ebab969d1a";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				cout << "You chose to see a platform providing a list of extended frameworks for C++!" << "\n";
				cout << "     ******* DIRECTING YOU TO THE WEBPAGE******";
				cout << endl;
				cout << endl;
				ShellExecute(NULL, _T("open"), curl2, NULL, NULL, SW_SHOWNORMAL);

			}
		}
		else if (word == "javascript" || word == "JAVASCRIPT" || word == "Javascript")
		{
			if (new2 == "TECH-PROJECTS" || new2 == "Tech-Projects" || new2 == "Tech-projects" || new2 == "tech-projects")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				cout << "You chose to see exciting project ideas you can start with!" << "\n";
				cout << "     ******* DIRECTING YOU TO THE IMAGE OF IT******";
				cout << endl;
				image = imread("image4.jpg");
				if (image.empty())
				{
					cout << "\n TECHBOT IS UNABLE TO FIND IMAGE";
					system("pause");
					return -1;
				}
				namedWindow("Image_Window");
				imshow("Image_Window", image);
				waitKey(0);

				destroyWindow("Image_Window");
				return 0;
			}
			else if (new2 == "frameworks" || new2 == "FRAMEWORKS" || new2 == "FrameWorks" || new2 == "Frameworks")
			{
				char curl3[100] = "https://hackr.io/blog/10-best-javascript-frameworks-2019";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				cout << "You chose to see a platform providing a list of extended frameworks for C++!" << "\n";
				cout << "     ******* DIRECTING YOU TO THE WEBPAGE******";
				cout << endl;
				cout << endl;
				ShellExecute(NULL, _T("open"), curl3, NULL, NULL, SW_SHOWNORMAL);

			}
		}
		else
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
			cout << "\n MOVE TO C++ FIRST TO BEGIN AS SECOND STEP TO PROJECTS,IDEAS AND THEIR FRAMEWORKS!";
			cout << endl;
			cout << "ALL THE BEST FRIEND!";
			cout << endl;
		}
	



}
else if (new1 == "SKILLED" || new1 == "skilled" || new1 == "Skilled")
{
	if (new2 == "open-source" || new2 == "opensource" || new2 == "OPEN-SOURCE" || new2 == "Open-source" || new2 == "OPENSOURCE")
	{
		if (word == "c" || word == "C")
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
			cout << "\n MOVE TO C++ FIRST TO BEGIN AS SECOND STEP TO PROJECTS,IDEAS AND THEIR FRAMEWORKS!";
			cout << endl;
			cout << "ALL THE BEST FRIEND!";
			cout << endl;
		}
		else
		{
			char durl[100] = "https://itsfoss.com/websites-for-foss/";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
			cout << "YOU CAN NOW FIND YOUR WAY TO THE DESTINATION IN RESEMBLENCE TO YOUR SKILL AND LEVEL";
			cout << endl;
			cout << "******* DIRECTING YOU TO THE WEBPAGE TO FIND LIST OF OPEN SOURCE PLATFORMS********";
			cout << endl;
			cout << endl;
			ShellExecute(NULL, _T("open"), durl, NULL, NULL, SW_SHOWNORMAL);
		}
	}
	else if (new2 == "real-problems" || new2 == "realproblems" || new2 == "Real-problems" || new2 == "REAL-PROBLEMS" || new2 == "REALPROBLEMS")
	{
		char dur2[100] = "https://yourstory.com/2016/06/10-real-problems-india-startups-can-aim-solve";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		cout << "FUSION OF ALL PROGRAMMING LANGUAGES YOU LEARNED SO FAR CAN GIVE YOU ";
		cout << "n PROBLEM-SOLVING ABILITY";
		cout << endl;
		cout << "******* DIRECTING YOU TO THE WEBPAGE TO FIND CATEGORIES OF REAL WORLD PROBLEMS!********";
		cout << endl;
		cout << endl;
		ShellExecute(NULL, _T("open"), dur2, NULL, NULL, SW_SHOWNORMAL);
		cout << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		cout << "ABOVE ALL OBSERVE,THINK,ANALYZE,DESIGN AND CODE.............";
	}
}
 else
 {
cout << "TECH-BOT OUT OF SUPPORT";
 }


		AI.color(12);
		cout << endl;
		cout.width(90);




		if (new2 == "courses" || new2 == "COURSES" || new2 == "Courses")
		{
			int new3;
			cout << "User:";
			AI.color(15);
			cout << "I will choose option ";
			cin >> new3;
			AI.color(2);
			cout << endl;
			string ch;
			char url[100] = "https://www.codecademy.com/";
			char url1[100] = "https://www.coursera.org/courses?query=coding&";
			char url2[100] = "https://www.udemy.com/";
			char url3[100] = "https://learn.freecodecamp.org/";
			char url4[100] = "https://in.udacity.com/";
			char url5[100] = "https://www.youtube.com/user/hiteshitube";
			char url6[100] = "https://www.khanacademy.org/";
			switch (new3)
			{
			case 1:
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				cout << "You chose to see a platform with list of paid/unpaid courses!" << "\n";
				cout << "     ******* DIRECTING YOU TO THE WEBPAGE******";
				cout << endl;
				cout << endl;
				ShellExecute(NULL, _T("open"), url, NULL, NULL, SW_SHOWNORMAL);
				break;

			case 2:
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				cout << "You chose to see a platform with list of paid/unpaid courses!" << "\n";
				cout << "     ******* DIRECTING YOU TO THE WEBPAGE******";
				cout << endl;
				cout << endl;
				ShellExecute(NULL, _T("open"), url1, NULL, NULL, SW_SHOWNORMAL);
				break;

			case 3:
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				cout << "You chose to see a platform with list of paid/unpaid courses!" << "\n";
				cout << "     ******* DIRECTING YOU TO THE WEBPAGE******";
				cout << endl;
				cout << endl;
				ShellExecute(NULL, _T("open"), url2, NULL, NULL, SW_SHOWNORMAL);
				break;

			case 4:
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				cout << "You chose to see a platform with list of paid/unpaid courses!" << "\n";
				cout << "     ******* DIRECTING YOU TO THE WEBPAGE******";
				cout << endl;
				cout << endl;
				ShellExecute(NULL, _T("open"), url3, NULL, NULL, SW_SHOWNORMAL);
				break;

			case 5:
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				cout << "You chose to see a platform with list of paid/unpaid courses!" << "\n";
				cout << "     ******* DIRECTING YOU TO THE WEBPAGE******";
				cout << endl;
				cout << endl;
				ShellExecute(NULL, _T("open"), url4, NULL, NULL, SW_SHOWNORMAL);
				break;

			case 6:
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				cout << "You chose to see a platform with list of paid/unpaid courses!" << "\n";
				cout << "     ******* DIRECTING YOU TO THE WEBPAGE******";
				cout << endl;
				cout << endl;
				ShellExecute(NULL, _T("open"), url5, NULL, NULL, SW_SHOWNORMAL);
				break;

			case 7:
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				cout << "You chose to see a platform with list of paid/unpaid courses!" << "\n";
				cout << "     ******* DIRECTING YOU TO THE WEBPAGE******";
				cout << endl;
				cout << endl;
				ShellExecute(NULL, _T("open"), url6, NULL, NULL, SW_SHOWNORMAL);
				break;
			}
		}



	/*char burl[100] = "https://codecondo.com/10-best-java-programming-blogs-to-follow/";
	SetConsoleTextAttribute(color, 10);
	cout << "Tech-Bot:";
	if (word == "java" || word == "JAVA" || word == "Java")
	{
		if (new2 == "TECH-ARTICLES" || new2 == "Tech-articles" || new2 == "techarticles" || new2 == "tech-articles")
		{   
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
			cout << "You chose to see inspiring tech-blogs you can follow highly!" << "\n";
			cout << "     ******* DIRECTING YOU TO THE WEBPAGE******";
			ShellExecute(NULL, "open",burl, NULL, NULL, SW_SHOWNORMAL);
		}
		
	}
	AI.color(12);*/
	
		cout << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
		cout.width(-100);
		cout << "Tech-Bot:";
		cout << "I hope I would have become your part in answering you all";
		cout << "\n About your curiosity and questions on whatever programming";
		cout << "\n Language you wanna start with.";
		cout << "\n HAPPY CODING "<<phrase<<"!!";

		cout << "\n Hope To See You Soon!";
		cout << "\n Bye, TechBot!";
		cout << endl;
		cout.width(100);
}