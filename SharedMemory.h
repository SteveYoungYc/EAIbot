#pragma once
#include <fstream>
#include <iostream>
#include <Windows.h>
#include <cstring>
#include <string>

using namespace std;

#define BUF_SIZE 4096

typedef struct RobotMsg {
	float linear_velocity;
	float angular_velocity;
} Msg;

class SharedMemory {
private:
	HANDLE map_file;
	LPVOID lp_base;
	char buffer[BUF_SIZE];

public:
	int open(LPCWSTR name);
	int create(LPCWSTR name);
	int close();
	int read(Msg* msg);
	int read_string(Msg* msg);
	int write(Msg* msg);
};
