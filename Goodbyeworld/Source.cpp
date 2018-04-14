#include <iostream>
#include <string>
#include "a.h"
using namespace std; //removes need to put std:: before commands

//Declaring funtions
//int ReadRoom(int, string);

int main() {
	//first define all variables
	string name;
	int roomID{ 1 };
	//begining of logic, getting name set
	cout << "What is your name?"<< endl;
	cin >> name;
	cout << "Hello " << name << ", let's go on an adventure together."<< endl;
	cout << "I will present you with a series of choices.\nFor each choice, answer either 'A' or 'B', exactly like that." << endl;
	while (roomID > 0)
		roomID = ReadRoom(roomID);
	system("Pause");
	return 0;
}

/*defining the function
int ReadRoom(int roomID, string name) {
	int newroomID;
	string answer;
	switch (roomID) {
	case 1:
		cout << "Let's start with something simple. In front of you are two paths.\nThe one on your right is clearly well traveled, and you can see signs that is has been used in the past few weeks.\nThe lefthand path however, shows signs of disuse, and is mostly overgrown."<<endl;
		cout << "A. Go down the righthand path. B. Go down the lefthand path"<< endl;
		cin >> answer;
		if (answer == "A")
			newroomID = 2;
		else if (answer == "B")
			newroomID = 3;
		else {
			cout << "I told you to only answer 'A' or 'B'" << endl;
			newroomID = roomID;
		}
		break;
	case 2:
		cout << "You have chosen the same path as everyone else. This is honestly quite a boring journey, going through life with your head down, doing nothing unique. \nSadly, no adventure awaits you by folllowing the crowd."<<endl;
		newroomID = 0;
		break;
	case 3:
		cout << "A grand adventure awaits you down this mysterious path, once I get around to coding it." << endl;
		newroomID = 0;
		break;
	default:  //default is what happens when it don't know what else to do
		cout << "Congrats you broke the program!"<<endl;
		newroomID = roomID;
		break;
	}
	return newroomID;
}*/