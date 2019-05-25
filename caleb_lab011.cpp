//==========================================================
//
// Title:      <labs application>
// Course:     CSC 1101
// Lab Number: Lab 11
// Author:     caleb obi
// Date:       2/26/2019
// Description:
//   Prompt the user for two positive integer numbers (num1, num2) 
// and use a validation loop to check that the values are between [-50, 50].
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

  // Declare variables
	int num1;
	int num2;
	int sum = 5;

  // Show application header
  cout << "Welcome to my lab Application!" << endl;
  cout << "--------------------------" << endl << endl;
  // Prompt user for intergers
  cout << "Enter a positive interger between -50 and 50: ";
  cin >> num1;
  while (num1 < -50 || num1 > 50)
  {
	  cout << "Error: invalid interger" << num1 << "." << endl;
	  cout << "\nEnter a positive interger between -50 and 50: ";
	  cin >> num1;
  }
  cout << "'" << num1 << "'is a valid interger." << endl;
  // prompt user for second integer
  cout << "Enter second positive integer between -50 and 50: ";
  cin >> num2;
  while (num2 < -50 || num2 > 50)
  {
	  cout << "Error: invalid interger" << num2 << "." << endl;
	  cout << "\nEnter second positive interger between -50 and 50: ";
	  cin >> num2;
  }
  cout << "'" << num2 << "'is a valid interger. " << endl;
  cout << "\nEnter a positive interger between -50 and 50: ";
  cin >> num1;
  while (num1 > num2)
  {
	  cout << "\nEnter a positive interger between -50 and 50: ";
	  num2 = num2 + 5;
  }
 
  

  // Show application close
  cout << "\nEnd of my Application" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
