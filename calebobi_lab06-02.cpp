//==========================================================
//
// Title:      <Minnie Minions>
// Course:     CSC 1101
// Lab Number: <lab06-02>
// Author:     <caleb obi>
// Date:       <2/3/2019>
// Description:
//   < C++ console application that determines the lowest and
// highest of three real numbers
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
     int Value1;
     int Value2;
     int Value3;
     int LowestValue;
     int HighestValue;

     // Show application header
     cout << "Welcome to Minnie Manions!" << endl;
     cout << "--------------------------" << endl
          << endl;

     // prompt user for coordinates:
     cout << "Enter Value1: ";
     cin >> Value1;
     cout << "Enter Value2: ";
     cin >> Value2;
     cout << "Enter Value3: ";
     cin >> Value3;

     // Calculations

     LowestValue = fmin(Value1, Value2);
     HighestValue = fmax(Value1, Value2);
     // Fomat all real numbers
     // cout << fixed << setprecision(1);

     // calculate and show inputs and outputs
     cout << endl;
     cout << setw(COLFMT1) << left << "Value1:"
          << setw(COLFMT2) << right << Value1 << endl;
     cout << setw(COLFMT1) << left << "Value2:"
          << setw(COLFMT2) << right << Value2 << endl;
     cout << setw(COLFMT1) << left << "Value3:"
          << setw(COLFMT2) << right << Value3 << endl;
     cout << setw(COLFMT1) << left << "LowestValue:"
          << setw(COLFMT2) << right << LowestValue << endl;
     cout << setw(COLFMT1) << left << "HighestValue:"
          << setw(COLFMT2) << right << HighestValue << endl;

     // Show application close
     cout << "\nEnd of Minies Manions" << endl
          << endl;

     // Pause before application window closes
     cout << "Press any key to exit ..." << endl;
     _getch();
}
