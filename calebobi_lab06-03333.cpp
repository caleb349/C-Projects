//==========================================================
//
// Title:      <Heat Hunters>
// Course:     CSC 1101
// Lab Number: <lab06-03>
// Author:     <caleb obi>
// Date:       <2/3/2019>
// Description:
//   < C++ console application that calculates and displays the Celsius equivalent of a Fahrenheit temperature.
// Prompt the user for a temperature in Fahrenheit,
// convert it to Celsius and show both values
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

     // declare constant
     const int COLFMT1 = 25;
     const int COLFMT2 = 12;

     // Declare variable
     int Fahrenheit;
     int Celsius;

     // Show application header
     cout << "Welcome to Heat Hunters!" << endl;
     cout << "--------------------------" << endl
          << endl;

     // prompt users for Temperatures
     cout << "Enter Fahrenheit Temperature:";
     cin >> Fahrenheit;
     // cout << "Enter Celsuis Temperature:";
     // cin >> Celsius;

     // Calculations/fomula
     Celsius = (Fahrenheit - 32) * 5 / 9;
     Fahrenheit = Celsius * 9 / 5 + 32;

     // Fomat all real numbers
     cout << fixed << setprecision(2);

     // calculate and show inputs and outputs
     cout << endl;
     cout << setw(COLFMT1) << left << "Fahrenheit Temperatures:"
          << setw(COLFMT2) << right << Fahrenheit << endl;
     cout << setw(COLFMT1) << left << "Celsuis Temperature:"
          << setw(COLFMT2) << right << Celsius << endl;

     // Write to screen
     cout << "Hello World!" << endl;

     // Show application close
     cout << "\nEnd of Heat Hunters" << endl
          << endl;

     // Pause before application window closes
     cout << "Press any key to exit ..." << endl;
     _getch();
}
