// C to F
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
    double a,ans;
    while(cin>>a)
    {
        ans=a*9/5+32;
        cout<<fixed<<setprecision(1)<<ans<<endl;
    }
    return 0;
}
