// EAIbotConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Robot.h"


int main() {
	Robot robot;

	ifstream infile;
	float data[2] = {0};
	DWORD start = GetTickCount();
	bool last = false, flag;

	while (1) {
		if ((GetTickCount() - start) % 100 == 0) {
			flag = true;
		}
		else {
			flag = false;
		}

		if (flag && !last) {
			infile.open("D:\\SJTU\\thesis\\robot\\source\\robot\\cmd\\cmd.txt");
			int index = 0;
			while (!infile.eof()) {
				infile >> data[index];
				index++;
			}
			robot.direction_control(data[0], data[1]);
			//robot.direction_control(0.1, 0);
			infile.close();
		}
		last = flag;
	}
	return 0;
}

