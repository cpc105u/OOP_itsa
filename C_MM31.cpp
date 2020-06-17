// calculate the total of 1~N can be dived by 2&3 can't by 12
#include<iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int sum = 0;
		for (int i = 6; i < n; i += 12)
		{
			sum += i;
		}
		cout << sum << endl;
	}
	return 0;
}
