// calculate 1*1~N*N
#include<iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		for (int i = 1; i < n + 1; i++)
            cout<<i<<"*"<<i<<"="<<i*i<<endl;
	}
	return 0;
}
