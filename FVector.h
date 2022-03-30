#pragma once
#include <string>
using namespace std;

class FVector {
public:
	float x;
	float y;
	float z;

	FVector();
	void zero();
	string to_string();
};