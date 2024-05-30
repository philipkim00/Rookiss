#include <iostream>
using namespace std;

int main()
{
	int cnt = 0;

	while (cnt < 5)
	{
		// 1
		if (cnt == 3)
		{
			break;
		}

		cout << "Hello World" << endl;
		cnt++;
	}

	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "Hello World" << endl;
			// 2
			if (i > 3)
			{
				break;
			}
		}
		// 3
		break;
	}
}