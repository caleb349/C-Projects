//==========================================================
//
// Title:      <square and cube calculator>
// Course:     CSC 1101
// Lab Number: Lab02-02
// Author:     <caleb obi>
// Date:       <1/19/2019>
// Description:
//   < A c++ application that calculates the square and cube of a number.>
//
//==========================================================
#include <conio.h>   // For function getch()
#include <cstdlib>   // For several general-purpose functions
#include <fstream>   // For file handling
#include <iomanip>   // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>    // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{

  // Declare variables
  int num = 4;
  // <your code here>

  // Show application header
  cout << "Welcome to ###" << endl;
  cout << "--------------------------" << endl
       << endl;

  // Calculate and show square and cube
  cout << "For number " << num
       << ", the square is " << num * num
       << ", and the cube is " << num * num * num
       << "." << endl;

  // Show application close
  cout << "\nEnd of ###" << endl
       << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();
}
