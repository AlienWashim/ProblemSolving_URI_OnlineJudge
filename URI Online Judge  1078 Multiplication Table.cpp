#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if(N > 2 && N < 1000)
    {
        for(int i = 1; i <= 10; i++)
        {
            cout << i << " X " << N << " = " << i*N << endl;
        }
    }
}
