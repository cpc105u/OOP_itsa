//calculate add&mul&sub&div&mod
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a,b;
    double add,sub,mul,div,mod;
    while(cin>>a>>b)
    {
        add=a+b;
        mul=a*b;
        sub=a-b;
        div=a/b;
        mod=a%b;
        cout<<a<<"+"<<b<<"="<<add<<endl;
        cout<<a<<"*"<<b<<"="<<mul<<endl;
        cout<<a<<"-"<<b<<"="<<sub<<endl;
        if(a%b<0)
            cout<<a<<"/"<<b<<"="<<div-1<<"..."<<mod+b<<endl;
        else
            cout<<a<<"/"<<b<<"="<<div<<"..."<<mod<<endl;
    }
    return 0;
}
