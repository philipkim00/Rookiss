#include <iostream>
using namespace std;

enum ENUM_GBB
{
	GBB_SCISSORS,
	GBB_ROCK,
	GBB_PARER
};

int main()
{

	srand(time(0));

	while (true)
	{
		cout << "����(0) ����(1) ��(2) ����ּ���!" << endl;
		cout << "> ";

		// �����
		int value;
		cin >> value;

		// ��ǻ�� 
		int computerValue = rand() % 3;

		if (value == GBB_SCISSORS)
		{
			switch (computerValue)
			{
			case GBB_SCISSORS:
				cout << "����(Player) vs ����(Computer) : �����ϴ�!" << endl;
				break;
			case GBB_ROCK:
				cout << "����(Player) vs ����(Computer) : �����ϴ�!" << endl;
				break;
			case GBB_PARER:
				cout << "����(Player) vs ��(Computer) : �̰���ϴ�!" << endl;
				break;
			default:
				break;
			}
		}
		else if (value == GBB_ROCK)
		{
			switch (computerValue)
			{
			case GBB_SCISSORS:
				cout << "����(Player) vs ����(Computer) : �̰���ϴ�!" << endl;
				break;
			case GBB_ROCK:
				cout << "����(Player) vs ����(Computer) : �����ϴ�!" << endl;
				break;
			case GBB_PARER:
				cout << "����(Player) vs ��(Computer) : �����ϴ�!" << endl;
				break;
			default:
				break;
			}
		}
		else
		{
			switch (computerValue)
			{
			case GBB_SCISSORS:
				cout << "��(Player) vs ����(Computer) : �����ϴ�!" << endl;
				break;
			case GBB_ROCK:
				cout << "��(Player) vs ����(Computer) : �̰���ϴ�!" << endl;
				break;
			case GBB_PARER:
				cout << "��(Player) vs ��(Computer) : �����ϴ�!" << endl;
				break;
			default:
				break;
			}
		}
	}
}