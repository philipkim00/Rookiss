#include <iostream>
using namespace std;

void TestFunction(int a)
{
	cout << "Test " << a << endl;
}

int main()
{
	int a = 0;
	TestFunction(100);
}