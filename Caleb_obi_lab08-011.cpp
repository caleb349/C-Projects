//==========================================================
//
// Title:      Heat Hunters
// Course:     CSC 1101
// Lab Number: 6-3
// Author:     Dan Ouellette
// Date:       4 February 2019
// Description:
//   This C++ console application calculates and displays
// the Celsius equivalent of a Fahrenheit temperature.  It
// prompts the user for a temperature in Fahrenheit, converts
// it to Celsius and shows both values.
//
//==========================================================
#include <conio.h>	 // For function getch()
#include <cstdlib>	 // For several general-purpose functions
#include <fstream>	 // For file handling
#include <iomanip>	 // For formatted output
#include <iostream>	 // For cin, cout, and system
#include <string>	 // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{

	// Declare constants
	const int COLFMT1 = 25;
	const int COLFMT2 = 8;

	// Declare variables
	char DEGREE_SYMBOL = (char)167;

	// Declare variables
	double tempF;
	double tempC;

	// Format real numbers
	cout << fixed << setprecision(2);

	// Show application header
	cout << "Welcome to Heat Hunters" << endl;
	cout << "-----------------------" << endl
		 << endl;

	// Prompt for and get a Fahrenheit temperature
	cout << "Enter temperature in Fahrenheit ranging from -60 to 120: ";
	cin >> tempF;
	// test Temperature
	if (tempF < -60 || tempF > 120)
	{
		cout << " Error Message" << endl
			 << endl;
	}
	else if (tempF > -60 || tempF < 120)
	{
		cout << "Convert to Celsius" << endl
			 << endl;
	}
	// Convert Fahrenheit to Celsius
	tempC = (tempF - 32) * (5 / 9.);

	// Show Fahrenheit and Celsius
	cout << endl;
	cout << setw(COLFMT1) << left << "Fahrenheit temperature: "
		 << setw(COLFMT2) << right << tempF
		 << " " << DEGREE_SYMBOL << "F" << endl;
	cout << setw(COLFMT1) << left << "Celsius temperature: "
		 << setw(COLFMT2) << right << tempC
		 << " " << DEGREE_SYMBOL << "C" << endl;

	// Show application close
	cout << "\nEnd of Heat Hunters" << endl
		 << endl;

	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;
	_getch();
}
