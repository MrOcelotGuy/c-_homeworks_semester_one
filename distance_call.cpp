#include <iostream>
using namespace std;

int main()
{
    try
    {
        const double MIN_TIME = 0;
        const double MAX_TIME = 23.59;
        double startTime;
        int minutes;

       
        cout << "When did you start your call? (hint: type the hour and minute as a decimal) ";
        cin >> startTime;
        double difference = startTime - static_cast<int>(startTime);
        if (difference > 0.59 || startTime < MIN_TIME || startTime > MAX_TIME)
        {
            /* code */
            throw invalid_argument("That's not a valid hour.");
        }

        cout << "How many minutes are you calling for? ";
        cin >> minutes;

        if(startTime >= 0 && startTime <= 6.59)
        {
            cout << "You have to pay " << (minutes*0.05) << "$ dollars.";
        }
        else if(startTime >= 7 && startTime <= 19.00)
        {
            cout << "You have to pay " << (minutes*0.45) << "$ dollars.";
        }
        else if(startTime >= 19.01 && startTime <= 23.59)
        {
            cout << "You have to pay " << (minutes*0.2) << "$ dollars.";
        }
        else
        {
            cout << "You shouldn't have been able to have entered an invalid hour.";
        }

        



    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    

    


}