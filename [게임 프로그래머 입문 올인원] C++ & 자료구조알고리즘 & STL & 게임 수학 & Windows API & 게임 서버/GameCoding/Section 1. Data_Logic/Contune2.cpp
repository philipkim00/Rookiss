#include <iostream>
using namespace std;

int main()
{
	int cnt = 0;

	while (cnt < 5)
	{
		cnt++;

		if (cnt == 3)
		{
			continue;
		}

		cout << "Hello World" << endl;

		// 여기에 증감 코드를 넣으면 무한 반복코드가 된다.
		// cnt++;
	}
}