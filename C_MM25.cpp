// calculate the total of the number(1~N) of n/3
#include<iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int sum = 0;
		for (int i = 3; i < n + 1; i += 3)
			sum += i;
		cout << sum << endl;
	}
	return 0;
}
