#include <iostream>
using namespace std;

int main()
{
    int N;
    int X;
    cin  >> N;
    int store[N];

    for(int i = 1; i <= N; i++)
        {
            cin >> X;
            store[i] = X;
        }

        int inside = 0, outside = 0;
        for(int i = 1; i <= N; i++)
        {
            if(store[i] >=10 && store[i] <= 20)
            {
                inside++;
            }
            else{
                outside++;
            }
        }

        cout << inside << " in" << endl << outside << " out" << endl;
}



