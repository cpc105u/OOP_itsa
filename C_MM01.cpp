// calculate trapezoid area
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float top,bottom,high;
    float area;
    while(cin>>top>>bottom>>high)
    {
        area=(top+bottom)*high/2;
        cout<<"Trapezoid area:"<<fixed<<setprecision(1)<<area<<endl;
    }
    return 0;
}
