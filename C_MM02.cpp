// calculate triangle area
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float a,b;
    float area;
    while(cin>>a>>b)
    {
        area=a*b/2;
        cout<<fixed<<setprecision(1)<<area<<endl;
    }
    return 0;
}
