#include "Triangle.h"
Triangle :: Triangle() {
}
Triangle :: Triangle(int sides, int length) {
	this->sides = 3;
	this->length = length;
}
int Triangle :: perimetri() {
	return 3 * length;
}