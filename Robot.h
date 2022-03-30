#pragma once

#include <fstream>
#include <iostream>
#include <Windows.h>
#include <time.h>
#include "LoadEAIDll.h"

#include <cstring>
#include <string>
#include "HCNetSDK.h"
#include "FVector.h"
#include "SharedMemory.h"

using namespace std;


class Robot {
private:
	FVector next_pos;
	SharedMemory shared_mem;
public:
	Robot();
	~Robot();
	DWORD WINAPI mytimernull(LPVOID args);
	void direction_control(float linear_velocity, float angular_velocity);
	void run();
	FVector get_next_pos();
};
