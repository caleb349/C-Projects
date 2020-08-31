//==========================================================
//
// Title:      Cereal Suppers
// Course:     CSC 1101
// Lab Number: 10-2
// Author:     Dan Ouellette
// Date:       15 February 2019
// Description:
//   This C++ console application analyzes the types of
// characters in a string entered by the user.  It prompts
// for and gets from the user a string containing at least
// ten characters.  If the string contains fewer than ten
// characters, it prints an error message.  If the string
// contains at least ten characters, it tests the third,
// sixth, and ninth characters to answer the following:
//   -Is the character a digit?
//   -Is the character alphanumeric?
//   -Is the character punctuation?
// It shows the results for each character analysis.
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
	const int COLFMT1 = 18;
	const int COLFMT2 = 12;

	// Declare variables
	char type;
	int Boxes;
	int Discount;
	string Code;
	string s;

	// Format real numbers
	cout << fixed << setprecision(2);

	// Show application header
	cout << "Welcome to Letter Lovers" << endl;
	cout << "------------------------" << endl
		 << endl;

	//// Prompt for and get string
	cout << "Enter the number of boxes purchased: ";
	cin >> Boxes;
	while (Boxes < 1 || Boxes > 9)
	{
		cout << "Error: Invalid number of boxes!!" << endl;
		cout << "\nEnter the number of boxes purchased (1-9): ";
		cin >> Boxes;
	}
	cout << "'" << Boxes << "' is a valid number of boxes." << endl
		 << endl;
	// prompt for and get user percentage discount
	cout << "Enter the Percentage discount (0-20): ";
	cin >> Discount;
	while (Discount < 0 || Discount > 20)
	{
		cout << "Error: Invalid percentage" << s << "." << endl;
		cout << "\nEnter the Percentage discount (0-20): ";
		cin >> s;
	}
	cout << "'" << s << "' is a valid percentage discount." << endl
		 << endl;
	// prompt for and get user cereal codes
	cout << "Enter the cereal code (w-wheaties, c-cheerios, r-rice krispies): ";
	cin >> type;
	while (Cereal_Code != "w" || Cereal_Code != "c" || Cereal_Code != "r")
	{
		cout << "Error: Invalid cereal codes" << s << "." << endl;
		cout << "\nEnter the cereal code (w-wheaties, c-cheerios, r-rice krispies):): ";
		cin >> s;
	}
	cout << "'" << s << "' is a valid number of boxes." << endl
		 << endl;
	// Test which gas type entered
	cout << "Enter a gas type (w-wheaties, c-cheerios, r-rice krispies):): ";
	if (type == "w")
		cout << "Cereal code 'Wheaties' cost $4.00 cost per gallon. " << endl;
	else if (type == 'c')
		cout << "Cereal code 'cheerios' cost $3.50 cost per gallon." << endl;
	else if (type == 'r')
		cout << "Cereal type 'Rice Krispies' cost $3.00 per gallon." << endl;
	else
		cout << "'" << type << "'is an unknown cereal type" << endl;

	// Test which gas type entered
	cout << "Using previously entered gas type of '" << type << "'." << endl;
	switch (type)
	{
	case 'w':
		total = 4.00 * box * (Discount / 100);
		cout
			<< setw(COLFMT1) << left << "Boxes:"
			<< setw(COLFMT2) << right << Boxes << endl
			<< setw(COLFMT1) << left << "Discount (%):"
			<< setw(COLFMT2) << right << Discount << endl
			<< setw(COLFMT1) << left << "Cereal code:"
			<< setw(COLFMT2) << right << Cereal_Code << endl
			<< setw(COLFMT1) << left << "Cereal type" << endl
			<< setw(COLFMT2) << right << "Wheaties" << endl
			<< setw(COLFMT1) << left << "Cereal cost ($):"
			<< setw(COLFMT2) << right << "4.00" << endl
			<< setw(COLFMT1) << left << "Purchase cost ($):"
			<< setw(COLFMT2) << right << total << endl;
		// cout << "cereal type 'Wheaties' cost $4.00 cost per gallon." << endl;
		break;
	case 'c':
		// cout << "Cereal type 'Cheerios' cost $3.50 cost per gallon." << endl;
		total = 3.5 * box * (Discount / 100);
		cout
			<< setw(COLFMT1) << left << "Boxes:"
			<< setw(COLFMT2) << right << Boxes << endl
			<< setw(COLFMT1) << left << "Discount (%):"
			<< setw(COLFMT2) << right << Discount << endl
			<< setw(COLFMT1) << left << "Cereal code:"
			<< setw(COLFMT2) << right << Cereal_Code << endl
			<< setw(COLFMT1) << left << "Cereal type" << endl
			<< setw(COLFMT2) << right << "Cherios" << endl
			<< setw(COLFMT1) << left << "Cereal cost ($):"
			<< setw(COLFMT2) << right << "3.50" << endl
			<< setw(COLFMT1) << left << "Purchase cost ($):"
			<< setw(COLFMT2) << right << total << endl;
		break;

	case 'r':
		total = 3 * box * (Discount / 100);
		cout
			<< setw(COLFMT1) << left << "Boxes:"
			<< setw(COLFMT2) << right << Boxes << endl
			<< setw(COLFMT1) << left << "Discount (%):"
			<< setw(COLFMT2) << right << Discount << endl
			<< setw(COLFMT1) << left << "Cereal code:"
			<< setw(COLFMT2) << right << Cereal_Code << endl
			<< setw(COLFMT1) << left << "Cereal type" << endl
			<< setw(COLFMT2) << right << "Rice Kripies" << endl
			<< setw(COLFMT1) << left << "Cereal cost ($):"
			<< setw(COLFMT2) << right << "3" << endl
			<< setw(COLFMT1) << left << "Purchase cost ($):"
			<< setw(COLFMT2) << right << total << endl;
		// cout << "Cereal type 'Rice krispies' cost $3.00 cost per gallon." << endl;
		break;
	}

	// Show application close
	cout << "\nEnd of Creal Suppers" << endl
		 << endl;

	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;
	_getch();
}
