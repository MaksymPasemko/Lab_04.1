#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N, i,k;
	double S;
	cout << "k= "; cin >> k;
	cout << "N= "; cin >> N;
	S = 0;
	i = k;
	while (i <= N)
	{
		S += (sin(i) * cos(i)) / (1 + pow(sin(i), 2));
		i++;
	}
	cout << S << endl;
	S = 0;
	i = k;
	do {
		S += (sin(i) * cos(i)) / (1 + pow(sin(i), 2));
		i++;
	} while (i <= N);
	cout << S << endl;
	S = 0;
	for (i = 1; i <= N; i++)
	{
		S += (sin(i) * cos(i)) / (1 + pow(sin(i), 2));
	}
	cout << S << endl;
	S = 0;
	for (i = N; i >= 1; i--)
	{
		S += (sin(i) * cos(i)) / (1 + pow(sin(i), 2));
	}
	cout << S << endl;
	cin.get();
	return 0;
}