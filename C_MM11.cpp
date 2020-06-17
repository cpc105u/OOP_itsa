// calculate the least coin
#include<iostream>

using namespace std;

int main()
{
    int i;
    while(cin >> i)
    {
        cout << "NT10=" << i/10 << endl;
        cout << "NT5=" << (i%10)/5 << endl;
        cout << "NT1=" << (i%5) << endl;
    }
    return 0;
}
