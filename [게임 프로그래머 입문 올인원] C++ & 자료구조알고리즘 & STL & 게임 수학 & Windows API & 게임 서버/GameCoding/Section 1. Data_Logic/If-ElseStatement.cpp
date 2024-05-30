#include <iostream>
using namespace std;

int hp;

int main()
{
	hp = 100;

	hp -= 200;

	if (hp > 0)
	{
		cout << "살았습니다" << endl;
	}
	else
	{
		// 죽는 코드
		cout << "죽었습니다" << endl;
	}
}