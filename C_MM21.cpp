// calculate n!
#include<iostream>

using namespace std;

int main()
{
	unsigned long long x[20];
	x[1] = 1;
	for (int i = 2; i < 21; i++)
		x[i] = x[i - 1] * i;

	int n;
	while (cin >> n)
	cout << x[n] << endl;
	return 0;
}
