#include <iostream>
using namespace std;

int main()
{
    int year;

    while(cin >> year)
    {
        if(year >= 2000)
        {
            if(year % 15 == 0)
            {
                if(((year % 4  == 0) && (year %100 != 0)) || (year % 400 == 0))
                    {
                        cout << "This is leap year." << endl;
                        cout << "This is huluculu festival year." << endl;
                        if(year % 55 == 0)
                        {
                            cout << "This is bulukulu festival year." << endl;
                        }
                        cout << endl;
                    }else{
                        cout << "This is huluculu festival year." << endl;
                        cout << endl;
                    }

            }else{
                if((year % 4  == 0) && (year %100 != 0) || (year % 400 == 0))
                    {
                        cout << "This is leap year." << endl;
                        if(year % 55 == 0)
                        {
                            cout << "This is bulukulu festival year." << endl;
                        }
                        cout << endl;
                    }else{
                        cout << "This is an ordinary year." << endl;
                        cout << endl;
                    }
            }
        }
    }

}
