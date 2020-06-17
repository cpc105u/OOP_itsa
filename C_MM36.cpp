// judge season
#include<iostream>

using namespace std;

int main()
{
    int month;
    while(cin>>month)
    {
        if((month>=3)&&(month<=5)) cout<<"Spring"<<endl;
        if((month>=6)&&(month<=8)) cout<<"Summer"<<endl;
        if((month>=9)&&(month<=11)) cout<<"Autumn"<<endl;
        if((month==12)||(month==1)||(month==2)) cout<<"Winter"<<endl;
    }
    return 0;
}
