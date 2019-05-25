//==========================================================
//
// Title: Ajar Approximator
// Course: CSC 1101
// Lab Number: 16-2
// Author: caleb obi
// Date: March 24, 2019
// Description:
// This C++ console application takes an appliance_type and matches an
// equivalent string
// value. This app also opens a text file and writes data to the text
// file.
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

// Creaste global enumerated type appliance_type
enum appliance_type
{
	UNKNOWN, washer, dryer, refrigerator, microwave,
	toaster, stove
};
// Value function that matches an appliance_type and returns an equivalent
string type;
string converetedToApplianceString(appliance_type a)
{
	string match;
	// Test enumerated type
	switch (a) {
	case UNKNOWN:
		match = "UNKNOWN";
		break;
	case washer:
		match = "washer";
		break;
	case dryer:
		match = "dryer";
		break;
	case refrigerator:
		match = "refrigerator";
		break;
	case microwave:
		match = "microwave";
		break;
	case toaster:
		match = "toaster";
		break;
	case stove:
		match = "stove";
		break;
	}
	return match;
}
// Value funtion that matches a string type to an equivalent appliance 
// Value funtion that matches a string type to an equivalent appliance
// type
appliance_type convertedToApplianceType(string b) {
	appliance_type match2;
	// Test string
	if (b == "washer")
		match2 = washer;
	else if (b == "dryer")
		match2 = dryer;
	else if (b == "refrigerator")
		match2 = refrigerator;
	else if (b == "microwave")
		match2 = microwave;
	else if (b == "toaster")
		match2 = toaster;
	else if (b == "stove")
		match2 = stove;
	else
		match2 = UNKNOWN;
	return match2;
}
// Declare global constants
const double cRate = 0.02;
const double stRate = 0.06;
int main()
{
	// Declare constants
	const int COLFMT1 = 16;
	const int COLFMT2 = 12;
	const int WIDTH = 20;
	// Declare variables
	int lineCount;
	ofstream outFile;
	string applianceName;
	string applianceName2;
	double wholeSalePrice;
	double retailPrice;
	double profit;
	double commission;
	double salesTax;
	double total;
	char yn;
	appliance_type check;
	// Declare constants
	const string OUTPUT_FILE_NAME = "AppliancesSold.txt";
	// Show application header
	cout << "Welcome to Ajar Approximators!" << endl;
	cout << "------------------------------" << endl << endl;
	// Begin or end program
	cout << "Get a sale (y or n)? ";
	cin >> yn;
	yn = tolower(yn); cout << endl << endl;
	// Validation loop for (y or n)? prompt
	while (yn != 'y' && yn != 'n')
	{
		cout << "ERROR: You must enter 'y' or 'n'\n";
		cout << "Get a sale (y or n)? ";
		cin >> yn;
		yn = tolower(yn); cout << endl << endl;
	}
	while (yn != 'n')
	{
		// Attempt to open output file
		outFile.open(OUTPUT_FILE_NAME);
		if (!outFile.is_open())
			cout << "Error: unable to open file '"
			<< OUTPUT_FILE_NAME << "'." << endl << endl;
		else
		{
			// Prompt user for appliance name
			cout << "Enter an appliance (washer, dryer, refrigerator, microwave, toaster, stove): ";
				cin.ignore();
			getline(cin, applianceName); cout << endl;
            check = 
				convertedToApplianceType(applianceName);

			// Validation loop to insure appliance name is valid
			while (check == 0) 
			{
				cout << "ERROR: Invalid appliance name. ";
					cout << endl << endl << "Enter an appliance (washer, dryer, refrigerator, microwave, toaster, stove)  : ";
					getline(cin, applianceName); cout << endl;
				check =
					convertedToApplianceType(applianceName);
			}
			// Prompt user for whole sale price
			cout << fixed << setprecision(2);
			cout << "Enter the wholesale price (>= $0): ";
				cin >> wholeSalePrice; cout << endl;
			// Validation loop to insure that the wholesale price
			// is at least zero
				while (wholeSalePrice < 0) 
				{
					cout << "ERROR: the wholesale price must be at least $0 ";
						cout << endl << endl << "Enter the wholesale price (>= $0) : ";
						cin >> wholeSalePrice; cout << endl;
				}
			// Prompt user for the retail price
			cout << "Enter the retail price (>= $400.00): ";
				cin >> retailPrice; cout << endl;
			// Validation loop to insure that the retail price is
			// at least equal to the wholesale price
				while (retailPrice < wholeSalePrice) {
					cout << "ERROR: The retail price must be at least $400.00 " << "$" << wholeSalePrice;
						cout << endl << endl << "Enter the retail price (>= $400.00): ";
						cin >> retailPrice; cout << endl;
				}
			// Calculations
			profit = retailPrice - wholeSalePrice;
			commission = profit * cRate;
			salesTax = retailPrice * stRate;
			total = retailPrice + salesTax;
			// Formatted output to console
			cout << setw(WIDTH) << left << "Appliance"
				<< setw(WIDTH) << right << applianceName <<
				endl;
			cout << setw(WIDTH) << left << "Wholesale price ($): "
				<< setw(WIDTH) << right << wholeSalePrice
				<< endl;
			cout << setw(WIDTH) << left << "Retail price ($): "
				<< setw(WIDTH) << right << retailPrice <<
				endl;
			cout << setw(WIDTH) << left << "Profit ($): "
				<< setw(WIDTH) << right << profit << endl;
			cout << setw(WIDTH) << left << "Commission (2%): "
				<< setw(WIDTH) << right << commission <<
				endl;
			cout << setw(WIDTH) << left << "MI Sales tax (6%): "
				<< setw(WIDTH) << right << salesTax <<
				endl;
			cout << setw(WIDTH) << left << "Total cost: "
				<< setw(WIDTH) << right << total << endl;
			// Write data to text file
			outFile << fixed << setprecision(2);
			outFile << setw(COLFMT1) << left << "Appliance" <<
				setw(COLFMT2) << right
				<< "Wholesale" << setw(COLFMT2) << right <<
				"Retail" << setw(COLFMT2)
				<< right << "Profit" << setw(COLFMT2) <<
				right << "Commision" <<
				setw(COLFMT2) << right << "Sales tax" <<
				setw(COLFMT2) << right <<
				"Total" << endl;
			outFile << setw(COLFMT1) << left << applianceName <<
				setw(COLFMT2) << right
				<< wholeSalePrice << setw(COLFMT2) << right
				<< retailPrice << setw(COLFMT2)
				<< right << profit << setw(COLFMT2) <<
				right << commission <<
				setw(COLFMT2) << right << salesTax <<
				setw(COLFMT2) << right <<
				total << endl;
			// Close output file
			outFile.close(); cout << endl << endl;
		}
		// Prompt user for another calculation
		cout << "Get another sale (y or n)? ";
		cin >> yn;
		yn = tolower(yn); cout << endl << endl;
		// Validation loop for (y or n)? prompt
		while (yn != 'y' && yn != 'n') {
			cout << "ERROR: You must enter 'y' or 'n'\n";
			cout << "Get a sale (y or n)? ";
			cin >> yn;
			yn = tolower(yn); cout << endl << endl;
		}
	}
	// Show application close
	cout << "End of Ajar Approximators!" << endl << endl;
	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;
	_getch();
}