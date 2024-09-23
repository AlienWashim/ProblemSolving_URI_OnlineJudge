#include <iostream>
using namespace std;

int main()
{
    int pass = 2002;
    int input;
    bool check = false;
    while(!check)
    {
        cin >> input;

        if(input == pass)
        {
            check = true;
            cout << "Acesso Permitido" << endl;
        }
        else{
            cout << "Senha Invalida" << endl;
        }
    }
}
