#include <iostream>
using namespace std;

int main()
{
    int X;
    cin >> X;

    int reminder = 0;
    while(reminder < 6)
    {
        if((X%2)==1){
            cout << X << endl;
            reminder++;
        }
        X++;
    }
}
