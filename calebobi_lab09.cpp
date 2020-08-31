//==========================================================
//
// Title:      <application>
// Course:     CSC 1101
// Lab Number: <lab09>
// Author:     <caleb obi>
// Date:       <2/12/2019>
// Description:
//   Red costs $5 per square foot, Blue costs $1 per square foot,
// and Green costs $3 per square foot
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
  const int Red_cost = 5;
  const int Blue_cost = 1;
  const int Green_cost = 3;
  string Colour;
  int Area;
  int Price;
  int Total;

  // Show application header
  cout << "Welcome to color cost calculator!" << endl;
  cout << "--------------------------" << endl
       << endl;

  // Prompt user for values
  cout << "Enter the color you would like to paint your room with:";
  cin >> Colour;
  cout << "Enter the area of the room that you would::";
  cin >> Area;
  // user if and else statement
  if (Colour == "Red" || Colour == "red")
  {
    Total = Red_cost * Area;
    cout << "The cost to paint is a" << Area << " square foot wall red is " << Total << endl;
  }
  if (Colour == "Blue" || Colour == "Blue")
  {
    Total = Blue_cost * Area;
    cout << "The cost to paint is" << Area << "square foot wall Blue is" << Total << endl;
  }
  if (Colour == "Green" || Colour == "Green")
    Total = Green_cost * Area;
  cout << "The cost to paint is" << Area << "square foot wall Blue is" << Total << endl;

  // Show application close
  cout << "\nEnd of colour cost calculator" << endl
       << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();
}
