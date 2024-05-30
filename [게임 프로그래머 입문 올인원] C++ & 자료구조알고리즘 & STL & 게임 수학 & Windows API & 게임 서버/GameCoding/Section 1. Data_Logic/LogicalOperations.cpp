#include <iostream>
using namespace std;

bool isRich;
bool isTall;

bool result;

int main()
{
	isRich = true;
	isTall = true;
	// ! not
	cout << !isRich << endl;
	// && and
	result = isRich && isTall;
	cout << result << endl;
	// || or
	result = isRich || isTall;
	cout << result << endl;
}