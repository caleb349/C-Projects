//==========================================================
//
// Title:      Best Bugs
// Course:     CSC 1101
// Lab Number: lab08-02
// Author:     Dan Ouellette
// Date:       8 February 2019
// Description:
//   C++ console application that calculates and displays the cost of a customer�s purchase of one item.
// Prompt for and get from the user the quantity of the item purchased in the range 1-10
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
	// char DEGREE_SYMBOL = (char)167;

	// Declare variables
	int c;
	int h;
	int m;
	int p;
	int r;
	double Quantity;
	double Product_code;
	double Product_name;
	double Product _cost;
	double Purchase_cost;

	// Format real numbers
	cout << fixed << setprecision(2);

	// Show application header
	cout << "Welcome to Best Bug" << endl;
	cout << "-----------------------" << endl
		 << endl;

	// Prompt for and get a Fahrenheit temperature
	cout << "Enter Qyantity ranging from 1-10: ";
	cin >> tempF;
	// prompt user for fahrenheit
	// cout << "Enter Fahrenheit ranging from -60 to 120";
	// cin >> tempF;

	// Test Values
	cout << "if statement" << endl;
	cout << "Enter Quantity ranging from 1-10: ";
	cin >> Quantity;
	if (Quantity < 1 || Quantity > 10)
	{
		cout << " Error message" << endl
			 << endl;
	}
	else if (Quantity > 1 || quantity < 10)
	{
		cout << "Enter product character code" << endl;
	}
	// Using switch statement to test
	switch (Product_code)
	{
	case 'c':
		cout << " product name 'Memory card' it costs $30." << endl;
		break;

	case 'h':
		cout << "Product name 'Headphones' it costs $350." << endl;
		break;

	case 'm':
		cout << "Product name 'Headphones' it costs $54." << endl;
		break;
	case 'p':
		cout << "Product name 'Headphones' it costs $300." << endl;
		break;
	case 'r':
		cout << "Product name 'router' it costs $110." << endl;
		break;
	}

	// Convert Fahrenheit to Celsius
	// tempC = (tempF - 32) * (5 / 9.);

	// Show Fahrenheit and Celsius
	cout << endl;
	cout << setw(COLFMT1) << left << "c: "
		 << setw(COLFMT2) << right << c << endl;

	// Show application close
	cout << "\nEnd of Heat Hunters" << endl
		 << endl;

	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;
	_getch();
}
