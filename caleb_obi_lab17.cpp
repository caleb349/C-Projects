//==========================================================
//
// Title: Grade Application
// Course: CSC 1101
// Lab Number: 17
// Author: caleb obi
// Date: March 24, 2019
// Description:
// Define an enumerator type grades that contains the values A=90, B=80, C=70, D=60, F=50. 
// 	Prompt the user for a first name and store the value into a String variable.
// 	Prompt the user for a last name and store the value into a different String variable.
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

enum grades_type
{
	A = 90, B = 80, C = 70, D = 60, F = 50

};
// Value function that matches an appliance_type and returns an equivalent
string type;
string converetedToApplianceString(grades_type a)
{
	string match;
	// Test enumerated type
	switch (a) {
		//case UNKNOWN:
			// match = "UNKNOWN";
			// break;*/
	case A:
		match = "90";
		break;
	case B:
		match = "80";
		break;
	case C:
		match = "70";
		break;
	case D:
		match = "60";
		break;
	case F:
		match = "50";
		break;

	}
	return match;
}
//grades_type convertedToApplianceType(string b)
//{
//	grades_type S;
//	// Test string
//	if (b == "90")
//		S == 90;
//	else if (b == "80")
//		S == 80;
//	else if (b == "70")
//		S == 70;
//	else if (b == "60")
//		S == 60;
//	else if (b == "50")
//		S == 50;
//
//	// match2 = unknown;
//	return S;
//}

int main()
{

  // Declare variables
	string First;
	string Last;
	string Third;
	char Grade;



  // Show application header
  cout << "Welcome to my Application!" << endl;
  cout << "--------------------------" << endl << endl;

  // prompt the user for a first name 
  cout << "Please enter a first name : ";
  cin >> First;
  // prompt the user for last name
  cout << "Please enter a last name : ";
  cin >> Last;
  Third = First +     Last;
  // prompt user for a grade
  cout << "Please enter a grade (A-F) : ";
  cin >> Grade;
  switch (Grade)
  {
  case 'A':
	  cout << Third << " Has a score of 90 " << endl;
	  break;
  case 'B':
	  cout << Third << " Has a score of 80 " << endl;
	  break;
  case 'C':
	  cout << Third << " Has a score of 70 " << endl;
	  break;
  case 'D':
	  cout << Third << " Has a score of 60 " << endl;
	  break;
  case 'E':
	  cout << Third << " Has a score of 50 " << endl;
	  break;
  }
  
  // Show application close
  cout << "\nEnd of Grade  Application" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
