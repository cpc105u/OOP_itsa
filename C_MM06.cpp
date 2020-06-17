#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    double a,km;
    while(cin>>a)
    {
        km=a*1.6;
        cout<<fixed<<setprecision(1)<<km<<endl;
    }
    return 0;
}
