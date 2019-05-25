//==========================================================
//
// Title:      <Gas Gems>
// Course:     CSC 1101
// Lab Number: <lab04-03>
// Author:     <Caleb obi>
// Date:       <1/28/2019>
// Description:
//   C++ console application that shows the estimated cost to drive from one city to another. 
// Prompt for and get from the user the following four inputs:
// ● City traveling from
// ● City traveling to
// ● Distance in miles between the two cities
// ● Price per gallon of gas
// And Also Calculate the gas cost, snack cost, and total cost.  
// For the gas cost, assume the car gets 25 miles per gallon.  For the snack cost, 
// assume the car stops every 100 miles and the people spend $7.50 per stop. 
// Declare constants for the miles per gallon (25), snack stop (100), and snack cost ($7.50). 
// The total cost is the sum of the gas cost and the snack cost
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{
	// Declare Constant
	const int Miles_per_Gallon = 25;
	const int Snack_stop = 100;
	const double Snack_cost = 7.50;
	const int COLFMT1 = 22;
	const int COLFMT2 = 12;

	// declare Variables
	char FromCity;
	char ToCity;
	int Distance;
	double Price;
	int Miles;
	double GasCost;
	int SnackStop;
	double SnackCost;
	char totalCost;


	// Show application header
	cout << "Welcome to Gas Gems!" << endl;
	cout << "--------------------------" << endl << endl;

	// prompt for and get fromcity 
	cout << "Enter city traveled from: ";
	cin >> FromCity;

	// prompt for and get Tocity
	cout << "Enter city traveled to: ";
	cin >> ToCity;

	// prompt for and get distance
	cout << "Enter distance to travel (miles): ";
	cin >> Distance;

	// prompt for price
	cout << "Enter price per gallon: ";
	cin >> Price;

	// calculate times
	GasCost = Distance / Miles;
     totalCost = GasCost + SnackCost;

	// calculates and show input and output
	cout << endl;
	cout << setw(COLFMT1) << left << "From city:"
		<< setw(COLFMT2) << right << FromCity << endl;
	cout << setw(COLFMT1) << left << "To city:"
		<< setw(COLFMT2) << right << ToCity << endl;
	cout << setw(COLFMT1) << left << "Distance (miles):"
		<< setw(COLFMT2) << right << Distance << endl;
	cout << setw(COLFMT1) << left << "Price per gallon (mph):"
		<< setw(COLFMT2) << right << Price << endl;
	cout << setw(COLFMT1) << left << "Miles per gallon (hours): "
		<< setw(COLFMT2) << right << Miles << endl;
	cout << setw(COLFMT1) << left << "SnackCost (hours):"
		<< setw(COLFMT2) << right << SnackCost << endl;
	cout << setw(COLFMT1) << left << "Gas cost:"
		<< setw(COLFMT2) << right << GasCost << endl;
	cout << setw(COLFMT1) << left << "Snack cost:"
		<< setw(COLFMT2) << right << SnackCost << endl;





	// Show application close
	cout << "\nEnd of Gas Gems" << endl << endl;

	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;
	_getch();

}
