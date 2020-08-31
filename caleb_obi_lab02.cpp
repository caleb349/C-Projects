//==========================================================
//
// Title:      <Lizard Lenders>
// Course:     CSC 1101
// Lab Number: <lab 12>
// Author:     <caleb obi>
// Date:       <2/28/2019>
// Description:
//   <brief description of application including its inputs,
// processing, and outputs>
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
  // Declare varibles
  const int COLFMT1 = 15;
  const int COLFMT2 = 20;
  //  Declare variables
  double rate;
  int mounth;
  double interest;
  double balance;
  double payment;
  double principal;

  // Show application header
  cout << "Welcome to Lizard Lenders!" << endl;
  cout << "--------------------------" << endl
       << endl;
  // fomat real numbers
  cout << fixed << setprecision(2);

  // prompt user for and get
  cout << "Enter the car loan amount (1k - 5k): ";
  cin >> balance;
  while (balance <= 1000 || balance > 5000)
  {
    cout << "/nError wrong number Entered" << balance << "." << endl;
    cout << "Enter the car loan amount (1k - 5k): ";
    cin >> balance;
  }
  cout << "'" << balance << "'is a valid number. " << endl;

  cout << "Enter the monthly payment (100 - 500): ";
  cin >> payment;
  while (payment <= 100 || payment > 500)
  {
    cout << "/nError wrong monthly payment" << payment << "." << endl;
    cout << "Enter the monthly payment  (100 - 500): ";
    cin >> payment;
  }
  cout << "'" << payment << "'is a valid monthly payment. " << endl;

  cout << "Enter the annual interest rate (2-5%): ";
  cin >> rate;
  while (rate <= 1 || rate > 5)
  {
    cout << "/nError wrong interest rate entered" << rate << "." << endl;
    cout << "Enter the annual interest rate (2-5%): ";
    cin >> rate;
  }
  rate = rate / 12 / 100;
  // formT OUTPUT
  cout
      << setw(COLFMT1) << right << "month"
      << setw(COLFMT2) << right << "Balance($)"
      << setw(COLFMT2) << right << "Payment($)" << setw(COLFMT2) << right << "Interest"
      << setw(COLFMT2) << right << "principal($)" << endl;
  int month = 0;

  while (balance > 0)
  {
    month++;
    interest = balance * rate;
    principal = payment - interest;
    balance = balance - principal;

    cout
        << setw(COLFMT1) << right << month
        << setw(COLFMT2) << right << balance
        << setw(COLFMT2) << right << payment << setw(COLFMT2) << right << interest
        << setw(COLFMT2) << right << principal << endl;
  }
  cout << "Mounth remaining to pay loans: " << month << endl;
  // Show application close
  cout << "\nEnd of Lizard lenders" << endl
       << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();
}
