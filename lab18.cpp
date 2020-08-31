//==========================================================
//
// Title:      <College Kudos>
// Course:     CSC 1101
// Lab Number: <lab 20>
// Author:     <caleb obi>
// Date:       <4/6/2019>
// Description:
//   C++ console application that manages college names
//==========================================================
#include <conio.h>	 // For function getch()
#include <cstdlib>	 // For several general-purpose functions
#include <fstream>	 // For file handling
#include <iomanip>	 // For formatted output
#include <iostream>	 // For cin, cout, and system
#include <string>	 // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int menuOption()
{
	int opt;
	cout << "\ncollege Kudos Menu" << endl
		 << "1 - List colleges" << endl;
	<< "2 - sort colleges " << endl;
	<< "3 - search colleges" << endl;
	<< "9 - Exit" << endl
	<< endl;
	<< "Enter an option: ";
	cin >> opt;
	// return the option
	return (opt);
}
int linearSearch(int array[], int arraySize, int key)
{
	//Declare variables
	int index = 0;
	// loop
	while (index < arraySize && array[index] != key)
	{
		index = index + 1;
	}
	// return index
	if (index == arraySize)
	{
		cout << "\nERROR: code '" << key << "'is not in the list." << endl
			<< endl;
		return -1;
		{
			else
			{
				return index;
			}
		}
	}
}

void listColleges(string colleges[], int collegeCount)
{
	cout << "Colleges" << collegeCount << endl;
	cout << "----------------------------------" << endl;
	// loop to print college count
	for (int i = 1; i = <= collegeCount; i++)
	{
		cout << setw(9) << left << i;
	}
	cout << setw(9) << left << 'college'
}

int main()
{
	// int arrays to score scores for th teams

	// Show application close
	cout << "\nEnd of Tumbering tigers" << endl
		 << endl;

	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;
	_getch();
}
