#include "Square.h"
#include<iostream>
using namespace std;
Square :: Square() {
}
Square :: Square(int sides, int length) {
	this->sides = 4;
	this->length = length;
}
int Square :: perimetri() {
	return 4 * length;
}