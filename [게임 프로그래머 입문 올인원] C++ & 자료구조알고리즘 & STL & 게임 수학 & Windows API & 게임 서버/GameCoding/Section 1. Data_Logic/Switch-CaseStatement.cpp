#include <iostream>
using namespace std;

// 0 가위 1 바위 2 보
int choice;

int main()
{
	choice = 1;

	switch (choice)
	{
	case 0:
		cout << "가위를 냈습니다" << endl;
		break;
	case 1:
		cout << "주먹를 냈습니다" << endl;
		break;
	case 2:
		cout << "보를 냈습니다" << endl;
		break;
	default:
		cout << "이상한거 내지마시오" << endl;
		break;
	}
}