#include <iostream>
using namespace std;

int main()
{
	float _array[3][5] = { };
	float some_number = 0;


	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 5; k++)
		{
			cin >> _array[i][k];
			some_number += _array[i][k];
		}
	}

	cout << some_number / 15;
}