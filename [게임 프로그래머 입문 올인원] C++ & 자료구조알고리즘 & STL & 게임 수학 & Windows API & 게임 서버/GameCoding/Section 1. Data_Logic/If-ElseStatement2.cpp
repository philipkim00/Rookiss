#include <iostream>
using namespace std;

int hp;

int main()
{
	hp = 100;

	if (hp <= 0)
	{
		cout << "���͸� óġ�߽��ϴ�" << endl;
	}
	else
	{
		// �״� �ڵ�
		if (hp <= 30)
		{
			cout << "���Ͱ� �������ϴ�!" << endl;
		}
		else
		{
			cout << "���Ͱ� �ݰ��߽��ϴ�" << endl;
		}
	}
}