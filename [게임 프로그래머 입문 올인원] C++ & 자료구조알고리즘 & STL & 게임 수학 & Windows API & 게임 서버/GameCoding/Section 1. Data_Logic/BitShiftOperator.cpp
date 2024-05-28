#include <iostream>
using namespace std;

int hp;
int a;


int main()
{
	hp = 1;
	a = 1;

	// 1
	//hp <<= a;
	// 2
	hp >>= a;
	cout << hp;
}