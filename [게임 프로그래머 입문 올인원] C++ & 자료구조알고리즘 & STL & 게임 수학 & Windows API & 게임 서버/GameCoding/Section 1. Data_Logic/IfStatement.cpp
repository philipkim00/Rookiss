#include <iostream>
using namespace std;

int hp;

int main()
{
	hp = 100;

	hp -= 200; 	// 1

	if (hp <= 0)
	{
		// �״� �ڵ�
		cout << "�׾����ϴ�" << endl;
	}
}