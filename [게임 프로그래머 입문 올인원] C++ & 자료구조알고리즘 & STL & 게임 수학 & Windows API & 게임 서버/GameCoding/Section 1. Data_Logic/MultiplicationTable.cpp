#include <iostream>
using namespace std;

int main()
{
	for (int num = 2; num <= 9; num++)
	{
		cout << num << "�� �Դϴ�." << endl;

		for (int i = 1; i <= 9; i++)
		{
			cout << num << " * " << i << " = " << num * i << endl;
		}

		cout << endl;
	}
}