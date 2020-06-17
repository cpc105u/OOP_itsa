// calculate square area
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	double x;
	while (cin >> x)
	{
		x *= x;
		x = x*10+0.5;
		x = floor(x);
        cout<<fixed<<setprecision(1)<<x/10<<endl;
	}
	return 0;
}
