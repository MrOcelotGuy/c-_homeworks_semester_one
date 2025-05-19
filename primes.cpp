// Chapter 6, Programming Challenge 22: isPrime Function
#include <iostream>
using namespace std;

// Function prototype
bool isPrime(int);

int main()
{
	int number;    // Number to check
   
	// Get a number from the user.
	cout << "Enter a number and I'll tell you "
		 << "whether it is prime: ";
	cin >> number;
   
	// Determine whether it is prime.
	if (isPrime(number))
		cout << number << " is prime.\n";
	else
		cout << number << " is NOT prime.\n";

	return 0;
}

// ********************************************************
// The isPrime function takes an integer as an argument   *
// and returns true if the argument is a prime number,    *
// or false otherwise.                                    *
// ********************************************************
bool isPrime(int num)
{
	for(int i = num; i > 0; i--)
	{
		if(num%i == 0)
		{
			return false;
		}
	}
	return true;
}