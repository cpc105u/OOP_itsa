//calculate the combination of time
#include<iostream>

using namespace std;

int main()
{
    int second;
    while(cin >> second)
    {
        cout << second/86400 << " days"<<endl;
        cout << second/3600%24 << " hours"<<endl;
        cout << second/60%60 << " minutes"<<endl;
        cout << second%60 << " seconds"<<endl;
    }
    return 0;
}
