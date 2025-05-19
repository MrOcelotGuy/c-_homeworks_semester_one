// Chapter 6, Programming Challenge 15: Overloaded Hospital
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
char getPatientType();
double patientCharges(int, double, double, double); // In-patient
double patientCharges(double, double);              // Out-patient

int main()
{
		char patientType;	 // I=in-patient, O=out-patient
		int days;			 // The number of days of stay
		double roomRate;     // The daily room rate
		double medication;   // Total medication charges
		double services;	 // Total for tests and other services
		double totalCharges; // Total of all charges

		// Get the patient type.
		patientType = getPatientType();
	
		// Get input for in-patients
		if (patientType == 'I' || patientType == 'i') 
		{
			// Get the number of days.
			cout << "Number of days in the hospital: ";
			cin  >> days;
		
			// Validate number of days.
			while (days < 0)
			{  
				cout << "Days in hospital must be zero or more. "
					<< "Please re-enter: ";
				cin  >> days;
			}
		
			// Get the daily room rate.
			cout << "Daily room rate: $";
			cin  >> roomRate;
		
			// Validate room rate.
			while (roomRate < 0)
			{  cout << "Room rate must be zero or more. "
					<< "Please re-enter: $";
				cin  >> roomRate;
			}
		}
	
		// Get medication charges.
		cout << "Medication charges: $";
		cin  >> medication;
	
		// Validate medication.
		while (medication < 0)
		{  
			cout << "Medication charges must be zero or more. "
				<< "Please re-enter: $";
			cin  >> medication;
		}

		// Get lab fees and other service charges.
		cout << "Lab fees and other service charges: $";
		cin  >> services;
		// Validate input.
		while (services < 0)
		{  
			cout << "These charges must be zero or more. "
				<< "Please re-enter: $";
			cin  >> services;
		}
			
		// Call correct patientCharges function to return total charges
		if (patientType == 'I')
			totalCharges = patientCharges(days, roomRate, medication, services);
		else
			totalCharges = patientCharges(medication, services);
		
		// Display results
		cout << fixed << showpoint << setprecision(2);
		cout << "\nThe total charges are $" << totalCharges << endl << endl;
	
		return 0;
		
	
}

//*********************************************************
// The getPatientType function returns 'I' or 'O' to      *
// indicate in-patient or out-patient.                    *
//*********************************************************
char getPatientType()
{
	char type;
	cout << "What is the patient type? I for in-patient, O for out-patient: ";
	cin >> type;
	if (type == 'i')
	{
		type = 'I';
	}
	else if (type == 'o')
	{
		type = 'O';
	}
	while (type != 'O' && type != 'I')
	{  
		cout << "Enter either I or O please. ";
		cin  >> type;
	}
	return type;
}

//*********************************************************
// This version of the overloaded patientCharges function *
// calculates charges for the in-patient type.            *
//*********************************************************
double patientCharges(int days, double rate, 
	                  double med, double serv)
{
	return days*rate + med + serv;
}

//*********************************************************
// This version of the overloaded patientCharges function *
// calculates charges for the out-patient type.           *
//*********************************************************
double patientCharges(double med, double serv)
{
	return med + serv;
}