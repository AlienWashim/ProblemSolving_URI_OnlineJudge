#include <iostream>
using namespace std;

int main()
{
    int store[100];
    int reminder=0;

    for(int i = 0; i<100 ;i++)
    {
        cin >> store[i];
        if(store[reminder] <= store[i])
        {
            reminder = i;
        }
    }

    cout << store[reminder] << endl << reminder+1 << endl;
}
