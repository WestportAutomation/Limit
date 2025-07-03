#include "Limit.h"

Limit::Limit() {

}

void Limit::init(int min, int max) {
	_Min = min;
	_Max = max;
}

void Limit::limit(int* value, int min, int max) {  //Limit the value to within the min and max parameters
	
	if (*value < min) {
		*value = min;
	}
	if (*value > max) {
		*value = max;
	}
}

void Limit::Scale(int* value, int min, int max, int newMin, int newMax) {  //Scale the value to a new range
	
*value = (((*value - min) * (newMax - newMin)) / (max - min)) + newMin;
}	