#include <iostream>
using namespace std;

int main()
{
    int N;
    cin  >> N;
    if(N > 1 && N < 1000)
    {
        for(int i = 1; i <= N; i++)
        {
            cout << i << " " << i*i << " " << i*i*i << endl;
        }
    }
}

