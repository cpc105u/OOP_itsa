// F91
#include<iostream>

using namespace std;

int f91(int n)
{
    if(n < 101)
        return f91(f91(n + 11));
    else
        return n - 10;
}

int main()
{
    int n;
    while(cin >> n)
    {
        while(n--)
        {
            int x;
            cin >> x;
            cout << f91(x) << endl;
        }
    }
    return 0;
}
