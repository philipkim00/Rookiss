#include <iostream>
using namespace std;

int hp;

int main()
{
	hp = 100;

	hp -= 200; 	// 1

	if (hp <= 0)
	{
		// Á×´Â ÄÚµå
		cout << "Á×¾ú½À´Ï´Ù" << endl;
	}
}