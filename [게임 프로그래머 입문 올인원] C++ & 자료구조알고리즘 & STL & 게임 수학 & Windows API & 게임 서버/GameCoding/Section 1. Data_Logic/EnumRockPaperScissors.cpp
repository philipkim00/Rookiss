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
		cout << "가위(0) 바위(1) 보(2) 골라주세요!" << endl;
		cout << "> ";

		// 사용자
		int value;
		cin >> value;

		// 컴퓨터 
		int computerValue = rand() % 3;

		if (value == GBB_SCISSORS)
		{
			switch (computerValue)
			{
			case GBB_SCISSORS:
				cout << "가위(Player) vs 가위(Computer) : 비겼습니다!" << endl;
				break;
			case GBB_ROCK:
				cout << "가위(Player) vs 바위(Computer) : 졌습니다!" << endl;
				break;
			case GBB_PARER:
				cout << "가위(Player) vs 보(Computer) : 이겼습니다!" << endl;
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
				cout << "바위(Player) vs 가위(Computer) : 이겼습니다!" << endl;
				break;
			case GBB_ROCK:
				cout << "바위(Player) vs 바위(Computer) : 비겼습니다!" << endl;
				break;
			case GBB_PARER:
				cout << "바위(Player) vs 보(Computer) : 졌습니다!" << endl;
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
				cout << "보(Player) vs 가위(Computer) : 졌습니다!" << endl;
				break;
			case GBB_ROCK:
				cout << "보(Player) vs 바위(Computer) : 이겼습니다!" << endl;
				break;
			case GBB_PARER:
				cout << "보(Player) vs 보(Computer) : 비겼습니다!" << endl;
				break;
			default:
				break;
			}
		}
	}
}