// EAIbotConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Robot.h"

Robot robot;

DWORD WINAPI mytimernull(LPVOID args) {
    BOOL bRet = FALSE;
    MSG msg = { 0 };
	ifstream infile;
	float data[2] = { 0 };
    UINT timerid1 = SetTimer(NULL, 0, 150, NULL);

    while ((bRet = GetMessage(&msg, NULL, 0, 0)) != 0) {
        if (bRet == -1) {
			return -1;
        } else {
            if (msg.message == WM_TIMER) {
                if (msg.wParam == timerid1) {
                    printf("timerid1 reaching ...\n");
					infile.open("D:\\SJTU\\thesis\\robot\\source\\robot\\cmd\\cmd.txt");
					int index = 0;
					while (!infile.eof()) {
						infile >> data[index];
						index++;
					}
					robot.direction_control(data[0], data[1]);
					infile.close();
                }
            } else {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
            }
        }
    }
    KillTimer(NULL, timerid1);
    return 0;
}


int main() {
    mytimernull(NULL);
	return 0;
}

