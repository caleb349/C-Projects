//==========================================================
//
// Title:      College Kudos
// Course:     CSC 1101
// Lab Number: <lab 20>
// Author:     <Caleb obi>
// Date:       <4/7/2019>
// Description:
// C++ console application that manages college names.  
// Declare string array colleges of size eight.  
// Initialize the colleges array with three colleges of your choice not in alphabetical order
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
//// Constants
const int ARR_SIZE = 8;



//==========================================================
// menuOption
//==========================================================
int menuOption()
{
	int option;
	cout << "College Kudos Menu\n";
	cout << "1 - List colleges\n";
	cout << "2 - Sort colleges\n";
	cout << "3 - Search colleges\n";
	cout << "9 - Exit\n\n";
	cout << "Enter an option: ";
	cin >> option;
	cout << endl;
	return option;
}

//==========================================================
// findMin
//==========================================================
int findMin(string colleges[], int collegeCount, int startIndex)
{
	int min = startIndex;
	for (int i = min; i < collegeCount; i++)
	{
		if (colleges[i] < colleges[min])
		{
			min = i;
		}
	}
	return min;
}

//==========================================================
// swap
//==========================================================
void swap(string& value1, string& value2) // Swapping values, passed by reference
{
	string temp = value1;
	value1 = value2;
	value2 = temp;
}

//==========================================================
// sortColleges
//==========================================================
void sortColleges(string colleges[], int collegeCount)
{
	int min;
	for (int i = 0; i < collegeCount; i++)
	{
		min = findMin(colleges, collegeCount, i);
		swap(colleges[i], colleges[min]);
	}
	cout << "Colleges sorted.\n\n";
}

//==========================================================
// listColleges
//==========================================================
void listColleges(string colleges[], int collegeCount)
{
	cout << "Colleges\n";
	for (int i = 0; i < collegeCount; i++)
	{
		cout << colleges[i] << endl;
	}
	cout << "\nCollege count: " << collegeCount << endl << endl;
}

//==========================================================
// searchColleges
//==========================================================
int searchColleges(string colleges[], int arraySize, string key)
{
	int min = 0;
	int max = arraySize - 1; // 7
	int guess;
	while (min <= max)
	{
		guess = (min + max) / 2; // Find midpoint
		if (colleges[guess] == key)
		{
			return guess;
		}
		else if (colleges[guess] < key)
			min = guess + 1;
		else
			max = guess - 1;
	}
	return -1;
}


int main() // Excecute program
{
	int num = 3; // Number of colleges currently added to colleges array
	int opt = 0;
	int searchResult;
	string colleges[ARR_SIZE] = { "Wayne State University", "Toledo University", "Alabama State University" };
	string key;

	// Show application header
	cout << "Welcome to my Application!" << endl;
	cout << "--------------------------" << endl << endl;

	// Write to screen
	while (opt != 9)
	{
		opt = menuOption();
		switch (opt)
		{
		case 1: listColleges(colleges, num);
			break;
		case 2: sortColleges(colleges, num);
			break;
		case 3:
			cout << "Enter  a college to search for: ";
			cin.ignore(INT_MAX, '\n');
			getline(cin, key); cout << endl;
			searchResult = searchColleges(colleges, ARR_SIZE, key);
			if (searchResult != -1)
			{
				cout << key << " was found at index " << searchResult << ".\n\n";
			}
			else
				cout << key << " did not return any results.\n\n";
			break;
		case 9:
			break;
		default:
			break;
		}
	}
	// Show application close
	cout << "\nEnd of College kudos" << endl << endl;

	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;

	_getch();
	return 0;
}




	


