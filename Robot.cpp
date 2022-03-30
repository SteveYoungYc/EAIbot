#include "Robot.h"

Robot::Robot() {
	next_pos.zero();
	next_pos.x = 1;
	next_pos.y = 2;
	next_pos.z = 3;
	string IP = "192.168.31.200";
	if (!LoadEAIdll()) {
		cout << "Load EAIDll failed!" << endl;
		return;
	}
	cout << "EAIDll loaded." << endl;

	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	if (!VC_InitDll(hWnd, 0, 200, (char *)IP.data(), 2, 1000, 500, 1000)) {
		cout << "Init chassis failed!" << endl;
		return;
	}
	cout << "Chassis initialized." << endl;

	if (!VC_IsNetWorkConnected()) {
		cout << "Connection failed!" << endl;
		return;
	}
	cout << "EAI connected" << endl;
}

Robot::~Robot() {
	shared_mem.close();
}

void Robot::run() {
    mytimernull(NULL);
}

void Robot::direction_control(float linear_velocity, float angular_velocity) {
	VC_DirectionControl(linear_velocity, angular_velocity);
	cout << linear_velocity << " " << angular_velocity << endl;
}

FVector Robot::get_next_pos() {
	return next_pos;
}

DWORD WINAPI Robot::mytimernull(LPVOID args) {
    BOOL bRet = FALSE;
    MSG msg = { 0 };
    float linear_velocity, angular_velocity;
    UINT timerid1 = SetTimer(NULL, 0, 100, NULL);

    while ((bRet = GetMessage(&msg, NULL, 0, 0)) != 0) {
        if (bRet == -1) {
            return -1;
        }
        else {
            if (msg.message == WM_TIMER) {
                if (msg.wParam == timerid1) {
                    shared_mem.open(L"UnrealRobotAsServer");
                    Msg msg;
                    if (shared_mem.read(&msg) < 0) {
                        return -1;
                    }
                    linear_velocity = msg.linear_velocity;
                    angular_velocity = msg.angular_velocity;
                    cout << linear_velocity << " " << angular_velocity << endl;
                    // direction_control(linear_velocity, -angular_velocity);
                    shared_mem.close();
                }
            }
            else {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
            }
        }
    }
    KillTimer(NULL, timerid1);
    return 0;
}
