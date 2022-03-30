#include "FVector.h"

FVector::FVector() {
	x = 0;
	y = 0;
	z = 0;
}

void FVector::zero() {
	x = 0;
	y = 0;
	z = 0;
}

string FVector::to_string() {
	string str;
	str = std::to_string(x) + " " + std::to_string(y) + " " + std::to_string(z);
	return str;
}
