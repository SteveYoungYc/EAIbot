// EAIbotConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Robot.h"

#define BUF_SIZE 4096

Robot robot;

DWORD WINAPI mytimernull(LPVOID args) {
    BOOL bRet = FALSE;
    MSG msg = { 0 };
	ifstream infile;
	float data[2] = { 0 };
    float linear_velocity, angular_velocity;
    UINT timerid1 = SetTimer(NULL, 0, 100, NULL);
    struct RobotMsg* robot_msg;
    

    while ((bRet = GetMessage(&msg, NULL, 0, 0)) != 0) {
        if (bRet == -1) {
			return -1;
        } else {
            if (msg.message == WM_TIMER) {
                if (msg.wParam == timerid1) {

                    HANDLE hMapFile = OpenFileMapping(FILE_MAP_ALL_ACCESS, NULL, L"ShareMemory");
                    if (hMapFile) {
                        LPVOID lpBase = MapViewOfFile(hMapFile, FILE_MAP_ALL_ACCESS, 0, 0, 0);
                        // 将共享内存数据拷贝出来
                        char szBuffer[BUF_SIZE] = { 0 };
                        strcpy_s(szBuffer, (char *)lpBase);
                        //robot_msg = (struct RobotMsg*)szBuffer;
                        //linear_velocity = robot_msg->linearVelocity;
                        //angular_velocity = robot_msg->angularVelocity;
                        string linear_str = (char*)szBuffer;
                        string angular_str;
                        for (int i = 0; i < 20; i++) {
                            if (szBuffer[i] == ' ') {
                                angular_str = (char*)(szBuffer + i + 1);
                            }
                        }
                        linear_velocity = std::stof(linear_str);
                        angular_velocity = std::stof(angular_str);
                        cout << linear_velocity << " " << angular_velocity << endl;
                        robot.direction_control(linear_velocity, -angular_velocity);
                        //linear_velocity = *(float*) szBuffer;
                        //angular_velocity = *((float*) (szBuffer + 8));
                        // printf("raw data: %d, %d, %d\n", szBuffer[4], szBuffer[5], szBuffer[6]);
                        UnmapViewOfFile(lpBase);
                        // 关闭内存映射文件对象句柄
                        CloseHandle(hMapFile);
                    } else {
                        // 打开共享内存句柄失败
                        printf("OpenMapping Error");
                    }

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

