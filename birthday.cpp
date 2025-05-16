#include <iostream>
using namespace std;

int main()
{
    try
    {
        /* code */
        int month;
        int year;
        bool leap = false;

        cout << "Enter an integer for the month: ";
        cin >> month;
        if(month > 12 || month < 1)
        {
            throw invalid_argument("That's not a valid month, try again");
        }
        cout << "Enter an integer for the year: ";
        cin >> year;
        if(year < 0)
        {
            throw invalid_argument("That's not a valid year, try again");
        }

        if(month == 2)
        {
            if(year%100 == 0 && year%400 == 0)
            {
                leap = true;
            }
            else if(year%4 == 0)
            {
                leap = true;
            }
            if(leap)
            {
                cout << "There are 29 days in that month as it is a leap year.";
            }
            else
            {
                cout << "There are 28 days in that month.";
            }
        }

        else if(month == 9 || month == 4 || month == 6 || month == 11)
        {
            cout << "There are 30 days in that month.";
        }
        else
        {
            cout << "There are 31 days in that month.";
        }


    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}