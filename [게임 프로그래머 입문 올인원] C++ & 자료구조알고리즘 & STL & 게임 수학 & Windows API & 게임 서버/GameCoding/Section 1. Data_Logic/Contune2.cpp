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

		// ���⿡ ���� �ڵ带 ������ ���� �ݺ��ڵ尡 �ȴ�.
		// cnt++;
	}
}