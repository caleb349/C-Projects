//==========================================================
//
// Title:      College Kudos
// Course:     CSC 1101
// Lab Number: 20-1
// Author:     Caleb Obi
// Date:       15 April 2019
// Description:
//   This C++ console application manages college names.  It 
// declares string array colleges of size eight.  It then 
// initializes it with three colleges.  The application 
// presents the following menu to the user:
//
//   College Kudos Menu
//   1 - List colleges
//   2 - Sort colleges
//   3 - Search colleges
//   9 � Exit
//
//   Enter an option :
//
// It continues to read and process menu options until the 
// user enters the sentinel value of 9.
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

//==========================================================
// Globals
//==========================================================

// Declare constants
const int ARRAY_SIZE = 8;
const int COLFMT1 = 20;
const int COLFMT2 = 6;

//==========================================================
// menuOption
//==========================================================
int menuOption()
{

	// Declare variables
	int option;

	// Show menu and get option
	cout << "\nCollege Kudos Menu" << endl;
	cout << "1 - List colleges" << endl;
	cout << "2 - Search colleges" << endl;
	cout << "3 - Add colleges" << endl;
	cout << "4 - Delete college" << endl;
	cout << "9 - Exit" << endl;
	cout << "\nEnter an option: ";
	cin >> option;
	return option;

}

//==========================================================
// listColleges
//==========================================================
void listColleges(string colleges[], int collegeCount)
{

	// Loop to list colleges
	cout << endl
		<< setw(COLFMT1) << left << "College" << endl;
	for (int i = 0; i < collegeCount; i++)
		cout
		<< setw(COLFMT1) << left << colleges[i] << endl;
	cout << endl << "College count: " << collegeCount << endl;

}
// ========================================================
// sortColleges
//=========================================================
void sortColleges(string colleges[], int collegecount)
{

	// declare
	string value;
	int spot;
	// loop to test each value
	for (int i = 1; i < collegecount; i++)
	{
		// loop 
		value = colleges[i];
		spot = i - 1;
		while (spot >= 0 && colleges[spot] > value)
		{
			colleges[spot + 1] = colleges[spot];
			spot = spot - 1;

		}
		// place value in spot
		colleges[spot + 1] = value;
	}
	// print
	cout << endl << "colleges sorted." << endl;

}
//==========================================================
// searchColleges
//==========================================================
int searchColleges(string colleges[], int arraySize, string key)
{
	// Declare variables
	int min = 0;
	int index;
	int max = arraySize - 1;
	// loop to find key
	while (min <= max)
	{
		index = (min + max) / 2;
		// Test if key found
		if (colleges[index] == key)
			return index;
		else if (colleges[index] < key)
			min = index + 1;
		else
			max = index - 1;
	}

	// return index
	return -1;
}
// ==================================================
// addCollege
// ===================================================
int addColleges(string colleges[], int collegeCount)
{
	int i = 0;
	cout << "Enter college to add: ";
	cin.ignore();
	getline(cin, colleges[i]);
	sortColleges(colleges, collegeCount);
	cout << "College added. " << endl;

	return 0;
}
// =======================================================
// DeleteCollege
// ========================================================
int DeleteColleges(string colleges[], int collegeCount)
{
	if (collegeCount > 0)
	{
		string key;
		int index;
		// prompt user
		cout << "Enter a college to delete: ";
		cin.ignore(INT_MAX, '\N');
		getline(cin, key);
		// search for colleges
		index = searchColleges(colleges, collegeCount, key);
		if (index == -1)
		{
			cout << "College name not found \n\n";
		}
		else
		{
			for (int i = index; i < collegeCount; i++)
			{
				colleges[i] = colleges[i + 1];

			}
			collegeCount--;// update
			cout << endl << "college deleted\n\n";
			return collegeCount;
		}
	
	}
	/*int i = 0;
	cout << "Enter college to delete: ";
	cin.ignore();
	getline(cin, colleges[i]);
	sortColleges(colleges, collegeCount);
	cout << "College deleted. " << endl;

	return 0;*/
}

//==========================================================
// main
//==========================================================
int main()
{

	// Declare variables
	string colleges[ARRAY_SIZE] =
	{ "Wayne State", "Toledo", "Michigan State" };
	int collegeCount = 3;
	int option;
	string college;
	int index;

	// Show application header
	cout << "Welcome to College Kudos" << endl;
	cout << "------------------------" << endl;

	// Loop to process options
	option = menuOption();
	while (option != 9)
	{

		// Handle option
		switch (option)
		{

			// List colleges
		case 1:
			listColleges(colleges, collegeCount);
			break;

			// Search colleges
		case 2:
			cout << "\nEnter a college to search for: ";
			cin.ignore(100, '\n');
			getline(cin, college);
			index = searchColleges(colleges, collegeCount, college);
			if (index != -1)
				cout << "'" << college << "' found at index "
				<< index << "." << endl;
			else
				cout << "'" << college << "' NOT found." << endl;
			break;

		case 3:
			cout << "\nEnter a college to add: ";
			cin.ignore(100, '\n');
			getline(cin, college);
			index = addColleges(colleges, collegeCount);
			if (index != -1)
				cout << "'" << college << "' Colleges Added "
				<< index << "." << endl;
			else
				cout << "'" << college << "' NOT found." << endl;
			break;

		case 4:
			cout << "\nEnter a college to delete: ";
			cin.ignore(100, '\n');
			getline(cin, college);
			index = DeleteColleges(colleges, collegeCount);
			if (index != -2)
				cout << "'" << college << "' Colleges deleted "
				<< index << "." << endl;
			else
				cout << "'" << college << "' NOT found." << endl;
			break;



			// Handle invalid option
		default:
			cout << endl << "Error: unknown option of '" << option
				<< "'." << endl;


		}
		option = menuOption();
	}

	// Show application close
	cout << "\nEnd of College Kudos" << endl << endl;

	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;
	_getch();

}
