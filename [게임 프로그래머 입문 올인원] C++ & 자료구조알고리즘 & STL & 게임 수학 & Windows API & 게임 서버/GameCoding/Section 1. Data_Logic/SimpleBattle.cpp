#include <iostream>
using namespace std;

int main()
{
	int round = 1;
	int hp = 100; // ����HP
	int damage = 25; // �÷��̾� ������

	while (true)
	{
		// ���� ����
		hp -= damage;
		if (hp < 0)
		{
			hp = 0;
		}

		cout << "Round: " << round << " ���� ü��: " << hp << endl;

		if (hp == 0)
		{
			cout << "���� ó��! " << endl;
			break;
		}

		if (round == 5)
		{
			cout << "���� ���� ����" << endl;
			break;
		}

		round++;
	}
}