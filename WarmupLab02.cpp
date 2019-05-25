//==========================================================
//
// Name:  Caleb obi
// Title:      Warmup lab 2
// Course:     CSC 1101
// Lab Number: Warmup lab 2
// Author:     Dan Ouellette
// Date:       1/4/2019
// Description:
//   This c++ program is based on the code template for csc
//1101. it had errors in it that i fixed (yay me)
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout".

int main()
{

  // Declare variables
  int i;
  double r;
  string s;
  char c;

  // Show application header
  cout << "Welcome to my Application!" << endl;
  cout << "--------------------------" << endl << endl;

	  // Read from console
	  cout << "Enter a number: " << endl;
  cin >> i;

  // Write to screen
  cout << "Hello World!" << endl;

  // Show application close
  cout << "\nEnd of my Application" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch(); 

}
