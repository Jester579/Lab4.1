#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N, i;
	double P, S;

	S = 0;
	i = 1;

	while (i <= 15)
	{
		S *= (pow(sin(i), 2) + pow(cos(1.0 / i), 2)) / pow(i, 2);
		i++;
	}

	cout << S << endl;
	S = 0;
	i = 1;

	
	do {
		S *= (pow(sin(i), 2) + pow(cos(1.0 / i), 2)) / pow(i, 2);
		i++;
	} while (i <= 15);
	cout << S << endl;
	S = 0;

	for (i = 1; i <= 15; i++)
	{
		S *= (pow(sin(i), 2) + pow(cos(1.0 / i), 2)) / pow(i, 2);
	}
	cout << S << endl;
	S = 0;

	for (i = 15; i >= 1; i--)
	{
		S *= (pow(sin(i), 2) + pow(cos(1.0 / i), 2)) / pow(i, 2);
	}
	cout << S << endl;
	return 0;
}

