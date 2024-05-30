#include <iostream>
using namespace std;

int main()
{
	int H;
	int K;
	cin >> H;
	cin >> K;

	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < H - K; j++)
		{
			cout << "*";
		}
		K--;
		cout << endl;
	}
}