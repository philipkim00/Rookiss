#include <iostream>
using namespace std;

int a;
int b;
bool result;
int hp;

int main()
{
	a = 10;
	b = 20;

	// °°ÀºÁö 
	result = a == b;
	cout << result << endl;

	// !=
	result = a != b;
	cout << result << endl;

	// <
	// <=
	// >
	// >=
	hp = 100;
	result = (hp <= 0);
}