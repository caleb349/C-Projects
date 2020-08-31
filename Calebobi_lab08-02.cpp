//==========================================================
//
// Title:      Best Bugs
// Course:     CSC 1101
// Lab Number: 08-02
// Author:     Dan Ouellette
// Date:       2/11/2019
// Description:
// C++ console application that calculates and displays the cost of a customer�s purchase of one item.
// Prompt for and get from the user the quantity of the item purchased in the range 1-10
//
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
	const double MemoryCard_Cost = 30;
	const double HeadPhones_Cost = 350;
	const double MicroWave_Cost = 54;
	const double PlayStation_cost = 300;
	const double Router_Cost = 110;
	const int COLFMT1 = 24;
	const int COLFMT2 = 12;

	// Declare variables
	double Quantity;
	char Code;
	string type;
	double Cost;

	// Format real numbers
	cout << fixed << setprecision(2);

	// Show application header
	cout << "Best Bugs" << endl;
	cout << "----------------------" << endl
		 << endl;

	// Prompt User for Quantity
	cout << "Enter Quantity of item ranging from 1 to 10:";
	cin >> Quantity;

	// loop to prompt for and get
	cout << "Enter Quantity of item ranging from 1-10:";
	cin >> Quantity;
	while (Quantity < 1 || Quantity > 10)
	{
		cout << "Error: invalid number " << Quantity << endl
			 << endl;
		cout << "Enter Productr character code: ";
		cin >> Quantity;
	}
	// Prompt for and get
	cout << "Enter the Producte Character code (r= MemoryCard,h= Headphones,m= Microwave,p= Playstation,r= router): ";
	cin >> Code;

	// test code
	switch (Code)
	{
	case 'c':
		type = "Memory card";
		Cost = MemoryCard_Cost;
		break;
	case 'h':
		type = "Headphones";
		Cost = HeadPhones_Cost;
		break;
	case 'm':
		type = "MicroWave";
		Cost = MicroWave_Cost;
		break;
	case 'p':
		type = "playStation";
		Cost = PlayStation_cost;
		break;
	case 'r':
		type = "Router";
		Cost = Router_Cost;
		break;
	}

	// using fomatred output manipulators
	cout << endl;
	cout << setw(COLFMT1) << left << "Quantity:"
		 << setw(COLFMT2) << right << Quantity << endl;
	cout << setw(COLFMT1) << left << "Product Code:"
		 << setw(COLFMT2) << right << Code << endl;
	cout << setw(COLFMT1) << left << "product Name:"
		 << setw(COLFMT2) << right << type << endl;
	cout << setw(COLFMT1) << left << "Product Cost:"
		 << setw(COLFMT2) << right << Cost << endl;
	cout << setw(COLFMT1) << left << "purchase cost:"
		 << setw(COLFMT2) << right << Cost << endl;

	// Show application close
	cout << "\nEnd of Best Bug" << endl
		 << endl;

	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;
	_getch();
}
