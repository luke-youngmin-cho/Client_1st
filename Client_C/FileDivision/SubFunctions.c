#include "SubFunctions.h"

extern opCount;

int sub_int(int a, int b) {
	opCount++;
	return a - b;
}

double sub_double(double a, double b){
	opCount++;
	return a - b;
}