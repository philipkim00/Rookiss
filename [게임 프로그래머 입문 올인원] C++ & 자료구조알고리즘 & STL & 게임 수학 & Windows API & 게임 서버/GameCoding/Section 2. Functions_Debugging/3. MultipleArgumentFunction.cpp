#include <iostream>
using namespace std;

void TestFunction(int a, float b)
{
	cout << "Test " << a << endl;
}

int hp = 100;

int main()
{
	TestFunction(hp, 3.14f);
}