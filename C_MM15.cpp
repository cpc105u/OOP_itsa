// judge in square
#include<iostream>

using namespace std;

int main()
{
    int length, width;
    while(cin >> length >> width)
    {
        if( length <= 100 && width <= 100 )
            cout << "inside" << endl;
        else
            cout <<"outside" << endl;
    }
    return 0;
}
