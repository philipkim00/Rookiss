#include <iostream>
using namespace std;

int hp;

int main()
{
	hp = 100;

	hp -= 200;

	if (hp > 0)
	{
		cout << "��ҽ��ϴ�" << endl;
	}
	else
	{
		// �״� �ڵ�
		cout << "�׾����ϴ�" << endl;
	}
}