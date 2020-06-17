// calculate the total between two integer(A~B)
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		int c = a + b;
		c *= abs(a - b) + 1;
		c /= 2;
		cout<<c<<endl;
	}
	return 0;
}
