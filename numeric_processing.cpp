#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream InputFile;
    InputFile.open("Random.txt");

    int example;
    int example2;
    
    InputFile >> example; 
    cout << example << endl; 
    InputFile >> example2;
    cout << example2;
}

    