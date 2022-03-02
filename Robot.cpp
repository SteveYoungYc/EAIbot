#include "Robot.h"

Robot::Robot() {
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

	// UINT_PTR TIMER = 1;
	// SetTimer(hWnd, TIMER, 100, NULL);
}

Robot::~Robot() {

}

void Robot::run() {

}

void Robot::direction_control(float linear_velocity, float angular_velocity) {
	VC_DirectionControl(linear_velocity, angular_velocity);
	cout << linear_velocity << " " << angular_velocity << endl;
}