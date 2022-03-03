#pragma once

#include <fstream>
#include <iostream>
#include <Windows.h>
#include <time.h>
#include "LoadEAIDll.h"

#include <cstring>
#include <string>
#include "HCNetSDK.h"

using namespace std;

struct RobotMsg {
	float linearVelocity;
	float angularVelocity;
};

class Robot {
private:

public:
	Robot();
	~Robot();
	void direction_control(float linear_velocity, float angular_velocity);
	void run();
};
