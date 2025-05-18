#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    double total;
    double average;
    int count;
    int hold;

    ifstream InputFile;
    InputFile.open("Random.txt");

    

    while(InputFile >> hold)
    {
        total += hold;
        count ++;
    }
    
    InputFile.close();

    average = total/count;

    cout << "The amount of numbers is " << count << endl;
    cout << "The total quantity is " << total << endl;
    cout << "The average of all the numbers is " << average << endl;

}

    