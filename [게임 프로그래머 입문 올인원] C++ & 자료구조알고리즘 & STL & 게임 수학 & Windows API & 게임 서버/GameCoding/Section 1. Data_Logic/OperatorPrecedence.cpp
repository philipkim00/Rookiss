#include <iostream>
using namespace std;

int hp;
int a;
int b;

int main()
{
	hp = 100;

	a = 5;

	b = 2;
	// 1
	//cout << hp * 2 + a / b;
	// 2
	cout << hp * (2 + a) / b;
}