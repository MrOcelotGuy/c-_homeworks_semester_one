// Chapter 6, Programming Challenge 7: Celsius Temperature Table
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double celsius(double);

int main()
{
	// Set up numeric output formatting.
	cout << setprecision(1) << fixed << showpoint;
   
	// Display the table heading.
	cout << "Fahrenheit" << setw(12) << right
		 << "Celsius";
	cout << "\n----------------------\n";
   
	// Display the Fahrenheit temperatures 0
	// through 20 and their Celsius equivalents.
	for (double f = 0; f <= 20; f++)
	{
		cout << setw(10) << right << f
			 << setw(12) << right << celsius(f) 
			 << endl;
	}

	return 0;
}

//********************************************
// The celsius function accepts a Fahrenheit *
// temperature and returns the equivalent    *
// Celsius temperature.                      *
//********************************************
double celsius(double f)
{
	return 5*(f-32)/9;
}