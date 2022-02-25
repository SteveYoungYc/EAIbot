// EAIbotConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <fstream>
#include <iostream>
#include <Windows.h>
#include <time.h>
#include "LoadEAIDll.h"

using namespace std;

int main() {
	if (LoadEAIdll() == false) {
		cout << "Load Failed!" << endl;
	}
	ifstream infile;
	float data[2] = {0};
	float linearVelocity = 0;
	float angularVelocity = 0;
	while (1) {
		infile.open("D:\\SJTU\\thesis\\robot\\source\\robot\\cmd\\cmd.txt");
		int index = 0;
		while (!infile.eof()) {
			infile >> data[index];
			index++;
		}
		linearVelocity = data[0];
		angularVelocity = data[1];
		VC_DirectionControl(linearVelocity, angularVelocity);
		cout << linearVelocity << " " << angularVelocity << endl;
		infile.close();
		Sleep(500);
	}
	return 0;
}

