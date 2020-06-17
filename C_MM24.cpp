// calculate salary
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
    int hour,money;
    double total;
    while(cin>>hour>>money)
    {
        if(hour<=60) total=hour*money;
        if((hour>60)&&(hour<=120) )
            total=60*money+(hour-60)*money*1.33;
        if(hour>120)
            total=60*money+60*money*1.33+(hour-120)*money*1.66;
        cout<<fixed<<setprecision(1)<<total<<endl;
    }
    return 0;
}
