#include <iostream>
using namespace std;

// 0 ���� 1 ���� 2 ��
int choice;

int main()
{
	choice = 1;

	switch (choice)
	{
	case 0:
		cout << "������ �½��ϴ�" << endl;
		break;
	case 1:
		cout << "�ָԸ� �½��ϴ�" << endl;
		break;
	case 2:
		cout << "���� �½��ϴ�" << endl;
		break;
	default:
		cout << "�̻��Ѱ� �������ÿ�" << endl;
		break;
	}
}