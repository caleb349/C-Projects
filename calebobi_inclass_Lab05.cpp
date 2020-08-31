//==========================================================
//
// Title:      <colors Cost calculator>
// Course:     CSC 1101
// Lab Number: <lab05>
// Author:     <caleb obi>
// Date:       <1/30/2019>
// Description:
//   < design a wall color cost calculator
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

	// Declare Constant
	const int RedCost = 5;
	const int BlueCost = 1;
	const int GreenCost = 3;
	const int COLFMT1 = 22;
	const int COLFMT2 = 12;

	// Declare variable
	int Area;
	double cost;
	int R1;
	int B2;
	int G3;

	// Show application header
	cout << "Welcome to colour cost calculator!" << endl;
	cout << "--------------------------" << endl
		 << endl;

	// Prompt user for Area
	cout << " Enter Area in (sq ft): ";
	cin >> Area;
	// calculate the cost
	R1 = RedCost * Area;
	B2 = BlueCost * Area;
	G3 = GreenCost * Area;

	// calculate and show inputs and outputs
	cout << endl;
	cout << setw(COLFMT1) << left << "Area (sq ft):"
		 << setw(COLFMT2) << right << Area << endl;
	cout << setw(COLFMT1) << left << "Cost in red ($):"
		 << setw(COLFMT2) << right << R1 << endl;
	cout << setw(COLFMT1) << left << "Cost in blue ($):"
		 << setw(COLFMT2) << right << B2 << endl;
	cout << setw(COLFMT1) << left << "cost in Green ($):"
		 << setw(COLFMT2) << right << G3 << endl;

	// Show application close
	cout << "\nEnd of colour cost calculator" << endl
		 << endl;

	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;
	_getch();
}
