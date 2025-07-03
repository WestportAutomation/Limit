#ifndef LIMIT_H
#define LIMIT_H
#include <Arduino.h>

class Limit {

private:
	int _Min = 0;
	int _Max = 0;

public:
	Limit();
	void init(int, int);
	void limit(int* value, int min, int max);
	void Scale(int* value, int min, int max, int newMin, int newMax);

};
#endif
