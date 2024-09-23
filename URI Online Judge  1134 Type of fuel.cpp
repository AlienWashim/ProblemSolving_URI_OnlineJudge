#include <iostream>
using namespace std;

int main()
{
    int n;
    int alco = 0, geso = 0, diesel = 0;

    cin >> n;
    while(n!= 4)
    {
        cin >> n;
        if(n == 1)
        {
            alco++;
        }
        else if(n == 2)
        {
            geso++;
        }
        else if(n == 3)
        {
            diesel++;
        }
        else{
            continue;
        }
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alco << endl << "Gasolina: " << geso << endl << "Diesel: " << diesel << endl;
}



