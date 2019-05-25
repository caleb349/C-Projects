
//==========================================================
//
// Title:      <Wheeled Wrens>
// Course:     CSC 1101
// Lab Number: <lab 21>
// Author:     <caleb obi>
// Date:       <3/12/2019>
// Description:
//   A struct programming that prints out a user input
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

struct studentType
{
	int ID;
	string firstname;
	string lastname;
	double gpa;
	int credits;


};
// global constants 
const int COLFMT = 24;

void printStudent(studentType arrayname[], int arraySize)
{
	for (int i = 0; i < studentType(); i++) {
		cout << setw(COLFMT) << left << "First name:"
			<< setw(COLFMT) << left << stu.firstname << endl
			<< setw(COLFMT) << left << "Last name:"
			<< setw(COLFMT) << left << stu.lastname << endl
			<< setw(COLFMT) << left << "Gpa:"
			<< setw(COLFMT) << left << stu.gpa << endl
			<< setw(COLFMT) << left << "credits:"
			<< setw(COLFMT) << left << stu.credits << endl;

	}
}


void addStudent(studentType arrayname[], int arraySize)
{
	studentType newStudent;
	// declare variables
	studentType stu;
	// set struct to student variables
	cout << "what is the new student's first name ? ";
	cin >> stu.firstname;
	// prompt user for last name
	cout << "what is your student's last name ? ";
	cin >> stu.lastname;
	// prompt user for gpa
	cout << "what is the new student's gpa ? ";
	cin >> stu.gpa;
	// prompt user for credits
	cout << "How many credits is the student taking ? ";
	cin >> stu.credits;

	// Show application close	
	cout << "\nEnd of struct application << endl << endl;
	////
	////	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;
	_getch();
}