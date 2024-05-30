#include <iostream>
using namespace std;

// 0 가위 1 바위 2 보
int choice;

int main()
{
	choice = 3;

	if (choice == 0)
	{
		cout << "가위를 냈습니다" << endl;
	}
	else if (choice == 1)
	{
		cout << "바위를 냈습니다" << endl;
	}
	else if (choice == 2)
	{
		cout << "보를 냈습니다" << endl;
	}
	else
	{
		cout << "이상한거 내지마시오" << endl;
	}
}