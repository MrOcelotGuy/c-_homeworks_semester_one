#include <iostream>
using namespace std;

int main()
{
    double weight;
    double height;

    

    cout << "How much do you weight? ";
    cin >> weight;
    cout << "How tall are you in inches? ";
    cin >> height;

    double bmi = weight*703/(height*height);

    if(bmi > 25)
    {
        cout << "Wow, " << bmi << " bmi, you should really lose some pounds.";
    }
    else if(bmi < 18.5)
    {
        cout << "Wow, " << bmi << " bmi, you should eat more you're far too skinny.";
    }
    else
    {
        cout << "Well at " << bmi << " bmi, you are at a healthy weight.";
    }

}