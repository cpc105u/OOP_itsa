// calculate the total of 1~N
#include<iostream>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int sum = (1 + n) * n;
        sum /= 2;
        cout<<"1 ";
        for(int i = 2; i < n + 1; i++)
            cout<<"+ "<<i<<" ";
        if(n == 1)
            cout<<"= 1"<<endl;
        else
            cout<<"= "<<sum<<endl;
    }
    return 0;
}
