// calculate the parking fee
#include<iostream>

using namespace std;

int main()
{
    int in_hour, in_min, out_hour, out_min;
    while(cin >> in_hour >> in_min >> out_hour >> out_min)
    {
        if((out_hour-in_hour)*60+(out_min-in_min)>240)
            cout << 280+((((out_hour-in_hour)*60+(out_min-in_min))/30)-8)*60 << endl;
        else if((out_hour-in_hour)*60+(out_min-in_min)>120)
            cout << 120+((((out_hour-in_hour)*60+(out_min-in_min))/30)-4)*40 << endl;
        else
            cout << ((((out_hour-in_hour)*60+(out_min-in_min))/30))*30 << endl;
    }
    return 0;
}
