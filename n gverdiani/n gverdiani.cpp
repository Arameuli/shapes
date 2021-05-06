#include <iostream>
#include<string>
#include"Ngverdi.h"
#include"Square.h"
#include"Triangle.h"
using namespace std;
int main()
{
	int s, l;
	cin >> s >> l;
	Ngverdi* k;
	Square t;
	t.sides = s; t.length = l;
	cout << t.perimetri();
	cout << endl;
	Triangle x;
	x.sides = s; x.length = l;
	cout << x.perimetri();
	cout << endl;
	k = &t;
	cout << k->perimetri();

}
