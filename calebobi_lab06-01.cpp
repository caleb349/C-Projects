//==========================================================
//
// Title:      <Maps masters>
// Course:     CSC 1101
// Lab Number: <lab06-01>
// Author:     <caleb obi>
// Date:       <2/3/2019>
// Description:
//   < C++ console application that calculates
// and displays the distance between two points on a map
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
     int x1;
     int y1;
     int x2;
     int y2;
     double Distance;

     // Show application header
     cout << "Welcome to Map Masters!" << endl;
     cout << "--------------------------" << endl
          << endl;

     // prompt user for coordinates:
     cout << "Enter X1 Coordinates: ";
     cin >> x1;
     cout << "Enter y1 coordinates: ";
     cin >> x2;
     cout << "Enter X2 coordinates: ";
     cin >> y1;
     cout << "Enter Y2 coordinates: ";
     cin >> y2;

     // Calculations
     // Fomula : $\sqrt{(x2-x1)^{2} + (y2-y1)^{2}}$
     Distance = sqrt(x2 - x1) ^ 2 + (y2 - y1) ^ 2;

     // Fomat all real numbers
     cout << fixed << setprecision(1);

     // calculate and show inputs and outputs
     cout << endl;
     cout << setw(COLFMT1) << left << "x1:"
          << setw(COLFMT2) << right << x1 << endl;
     cout << setw(COLFMT1) << left << "X2:"
          << setw(COLFMT2) << right << x2 << endl;
     cout << setw(COLFMT1) << left << "Y1:"
          << setw(COLFMT2) << right << y1 << endl;
     cout << setw(COLFMT1) << left << "Y2:"
          << setw(COLFMT2) << right << y2 << endl;
     cout << setw(COLFMT1) << left << "Distance:"
          << setw(COLFMT2) << right << Distance << endl;

     // Write to screen
     cout << "Hello World!" << endl;

     // Show application close
     cout << "\nEnd of Maps Masters" << endl
          << endl;

     // Pause before application window closes
     cout << "Press any key to exit ..." << endl;
     _getch();
}
