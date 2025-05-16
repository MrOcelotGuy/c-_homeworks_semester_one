#include <iostream>
using namespace std;

int main()
{
    try
    {
        int years;
        int inches;
        int temp;

        cout << "How many years? ";
        cin >> years;

        if(years < 1)
        {
            throw invalid_argument("Hey smart guy there has to be at least one year.");
        }
        for(int i = 0; i < years; i++)
        {
            for(int i = 0; i < 12; i++)
            {
                cout << "How many inches of rain this month bucko? ";
                cin >> temp;
                if(temp < 0)
                {
                    throw invalid_argument("You can't have negative rain pal.");
                }
                inches += temp;
            }
        }

        cout << "There were a total of " << (years*12) << " months in this period.\n";
        cout << "In total it rained " << inches << " inches in this period\n";
        cout << "The average monthly rainfall was " << (inches/(years*12)) << " inches per month";

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}