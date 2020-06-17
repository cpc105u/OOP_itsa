// calculate phone fee
#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	double minutes;
	while (cin >> minutes)
	{
		double y = minutes * 0.9;

		if (minutes > 800 && minutes < 1500)
			y *= 0.9;
		if (minutes > 1499)
			y *= 0.79;
		printf("%.1f\n", y);
	}
	return 0;
}
