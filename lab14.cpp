//==========================================================
//
// Title:      PI Throwers
// Course:     CSC 1101
// Lab Number: lab14
// Author:     caleb obi
// Date:       22 October 2018
// Description:
//   This C++ console application approximates PI.  It 
// prompts and gets from the user the number of terms to 
// approximate PI to.  It uses the following Leibniz formula:
//
//   PI approximation = 
// PI approximation = 4 * (1 / 1 – 1 / 3 + 1 / 5 – 1 / 7 + 1 / 9 – 1 / 11 + …)
//
// It continues to prompt for and get from the user the 
// number of terms until they enter a sentinel value of 99.
//
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
  int terms;
  int denominator;
  double sum;


  // Format real numbers
  cout << fixed << setprecision(10);

  // Show application header
  cout << "Welcome to PI Throwers" << endl;
  cout << "----------------------" << endl << endl;

  // Loop to prompt for and get number of terms
  cout << "Enter the number of terms to approximate PI to "
    << "(>=1, 99 to exit): ";
  cin >> terms;
  while (terms < 1)
  {
    cout << "Error: the number of terms must be at least 1"
      << endl;
    cout << "Enter the number of terms to approximate PI to "
      << "(>=1, 99 to exit): ";
    cin >> terms;
  }

  // Loop to approximate PI
  while (terms != 99)
  {

    // Loop to approximate PI
    denominator = 1;
    sum = 0;
    for (int i = 1; i <= terms; i++)
    {
      if (i % 2 == 0)
        sum = sum - 1. / denominator;
      else
        sum = sum + 1. / denominator;
      denominator = denominator + 2;
    }
    sum = sum * 4;

    // Show input and calculation
    cout << "PI to " << terms << " term(s) is " << sum 
      << "." << endl;

    // Loop to prompt for and get number of terms
    cout << "Enter the number of terms to approximate PI to "
      << "(>=1, 99 to exit): ";
    cin >> terms;
    while (terms < 1)
    {
      cout << "Error: the number of terms must be at least 1" 
        << endl;
      cout << "Enter the number of terms to approximate PI to "
        << "(>=1, 99 to exit): ";
      cin >> terms;
    }

  }

  // Show application close
  cout << "\nEnd of PI Throwers" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
