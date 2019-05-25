//==========================================================
//
// Title:      <application>
// Course:     CSC 1101
// Lab Number: <number>
// Author:     <name>
// Date:       <date>
// Description:
//    C++ console application that calculates and displays the cost of a customer�s cereal purchase. 
// Use a validation loop to prompt for and get from the user the number of cereal boxes purchased in the range 1-9.  
// Then use a validation loop to prompt for and get from the user the coupon discount in the range 0-20%.  
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
	// Declare Constants
	const int COLFMT1 = 24;
	const int COLFMT2 = 12;


  // Declare variables
  int boxes;
  int discount;
  int Cost;
  char Type;
  string s;
  int Total;
  char code;

  // Show application header
  cout << "Welcome to Cereal supporters" << endl;
  cout << "--------------------------" << endl << endl;

  //// Prompt for and get string
  cout << "Enter the number of boxes purchased(1-9): ";
  cin >> boxes;
  while (boxes <= 1 || boxes > 9)
  {
	  cout << "Error: Invalid number of boxes!!" << boxes << "." << endl;
	  cout << "\nEnter the number of boxes purchased (1-9): ";
	  cin >> boxes;
  }
  cout << "'" << boxes << "' is a valid number of boxes." << endl << endl;

  // prompt for and get user percentage discount
  cout << "Enter the Percentage discount (0-20): ";
  cin >> discount;
  while (discount <= 0 || discount > 20)
  {
	  cout << "Error: Invalid percentage" << discount << "." << endl;
	  cout << "\nEnter the Percentage discount (0-20): ";
	  cin >> discount;
  }
  cout << "'" << discount << "' is a valid percentage discount." << endl << endl;

  // prompt for and get user cereal codes
  cout << "Enter the cereal code (w-wheaties, c-cheerios, r-rice krispies): ";
  cin >> code;
  while (code != 'W' && code != 'C' && code != 'R')
  {
	  cout << "Error: Invalid cereal codes " << code << "." << endl;
	  cout << "\nEnter the cereal code (w-wheaties, c-cheerios, r-rice krispies):): ";
	  cin >> code;
  }
  cout << "'" << code << "' is a valid number of boxes." << endl << endl;


  // Test which gas type entered
  cout << "Enter cereal type (w-wheaties, c-cheerios, r-rice krispies):): ";
  if ( Type = 'w')
	  cout << "Cereal code 'Wheaties' cost $4.00 cost per gallon. " << endl;
  else if (Type = 'c')
	  cout << "Cereal code 'cheerios' cost $3.50 cost per gallon." << endl;
  else if (Type = 'r')
	  cout << "Cereal type 'Rice Krispies' cost $3.00 per gallon." << endl;
  else
	  cout << "'" << Type << "'is an unknown cereal type" << endl;



  // Test which gas type entered
  cout << "Using previously entered gas type of '" << Type << "'." << endl;
  switch (Type)
  {
  case 'w':
	  Total = 4 * boxes * (discount / 100);
	  cout
		  << setw(COLFMT1) << left << "Boxes:"
		  << setw(COLFMT2) << right << boxes << endl
		  << setw(COLFMT1) << left << "Discount (%):"
		  << setw(COLFMT2) << right << discount << endl
		  << setw(COLFMT1) << left << "Cereal code:"
		  << setw(COLFMT2) << right << code << endl
		  << setw(COLFMT1) << left << "Cereal type" << endl
		  << setw(COLFMT2) << right << "Wheaties" << endl
		  << setw(COLFMT1) << left << "Cereal cost ($):"
		  << setw(COLFMT2) << right << "4.00" << endl
		  << setw(COLFMT1) << left << "Purchase cost ($):"
		  << setw(COLFMT2) << right << Total << endl;
	  // cout << "cereal type 'Wheaties' cost $4.00 cost per gallon." << endl;
	  break;
  case 'c':
	  // cout << "Cereal type 'Cheerios' cost $3.50 cost per gallon." << endl;
	  Total = 3.5 * boxes * (discount / 100);
	  cout
		  << setw(COLFMT1) << left << "Boxes:"
		  << setw(COLFMT2) << right << boxes << endl
		  << setw(COLFMT1) << left << "Discount (%):"
		  << setw(COLFMT2) << right << discount << endl
		  << setw(COLFMT1) << left << "Cereal code:"
		  << setw(COLFMT2) << right << code << endl
		  << setw(COLFMT1) << left << "Cereal type" << endl
		  << setw(COLFMT2) << right << "Cherios" << endl
		  << setw(COLFMT1) << left << "Cereal cost ($):"
		  << setw(COLFMT2) << right << "3.50" << endl
		  << setw(COLFMT1) << left << "Purchase cost ($):"
		  << setw(COLFMT2) << right << Total << endl;
	  break;

  case 'r':
	  Total = 3 * boxes * (discount / 100);
	  cout
		  << setw(COLFMT1) << left << "Boxes:"
		  << setw(COLFMT2) << right << boxes << endl
		  << setw(COLFMT1) << left << "Discount (%):"
		  << setw(COLFMT2) << right << discount << endl
		  << setw(COLFMT1) << left << "Cereal code:"
		  << setw(COLFMT2) << right << code << endl
		  << setw(COLFMT1) << left << "Cereal type" << endl
		  << setw(COLFMT2) << right << "Rice Kripies" << endl
		  << setw(COLFMT1) << left << "Cereal cost ($):"
		  << setw(COLFMT2) << right << "3" << endl
		  << setw(COLFMT1) << left << "Purchase cost ($):"
		  << setw(COLFMT2) << right << Total << endl;
	  // cout << "Cereal type 'Rice krispies' cost $3.00 cost per gallon." << endl;
	  break;






	  // Read from console
	  //cout << "Enter a number: ";
	  //cin >> i;

	  // Write to screen
	  cout << "Hello World!" << endl;

	  // Show application close
	  cout << "\nEnd of Cereal supporters" << endl << endl;

	  // Pause before application window closes
	  cout << "Press any key to exit ..." << endl;
	  _getch();


  }
  }