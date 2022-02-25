// EAIbotConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Robot.h"


int main() {
	Robot robot;

	ifstream infile;
	float data[2] = {0};
	while (1) {
		infile.open("D:\\SJTU\\thesis\\robot\\source\\robot\\cmd\\cmd.txt");
		int index = 0;
		while (!infile.eof()) {
			infile >> data[index];
			index++;
		}
		// robot.direction_control(data[0], data[1]);
		infile.close();
		Sleep(500);
	}
	return 0;
}

