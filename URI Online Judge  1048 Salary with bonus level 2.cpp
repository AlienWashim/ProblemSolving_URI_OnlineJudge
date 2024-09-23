#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float x;

    cin >> x;

    if(x >= 0 && x <= 400)
    {
        float aSalary = (x * 15)/100;
        cout << "Novo salario: " << fixed << setprecision(2) << aSalary+x << endl << "Reajuste ganho: " << aSalary << endl << "Em percentual: " << "15 %" << endl;
    }
    else if(x >= 400.01 && x <= 800)
    {
        float aSalary = (x * 12)/100;
        cout << "Novo salario: " << fixed << setprecision(2) << aSalary+x << endl << "Reajuste ganho: " << aSalary << endl << "Em percentual: " << "12 %" << endl;
    }
    else if(x >= 800.01 && x <= 1200)
    {
        float aSalary = (x * 10)/100;
        cout << "Novo salario: " << fixed << setprecision(2) << aSalary+x << endl << "Reajuste ganho: " << aSalary << endl << "Em percentual: " << "10 %" << endl;
    }
    else if(x >= 1200.01 && x <= 2000)
    {
        float aSalary = (x * 7)/100;
        cout << "Novo salario: " << fixed << setprecision(2) << aSalary+x << endl << "Reajuste ganho: " << aSalary << endl << "Em percentual: " << "7 %" << endl;
    }
    else{
        float aSalary = (x * 4)/100;
        cout << "Novo salario: " << fixed << setprecision(2) << aSalary+x << endl << "Reajuste ganho: " << aSalary << endl << "Em percentual: " << "4 %" << endl;
    }
}
