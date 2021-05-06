#pragma once
#include<iostream>
using namespace std;
class Ngverdi
{
public:
	int sides, length;
	Ngverdi();
	Ngverdi(int sides, int length);
	virtual int perimetri() = 0;
};

