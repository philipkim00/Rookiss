#include <iostream>
using namespace std;

int main()
{
	int N;

	cin >> N;

	for (int j = 0; j < N; j++)
	{
		for (int i = 0; i < N; i++)
		{
			cout << "*";
		}

		cout << endl;
	}
}