// This program is a simple retirement calculator calculatig the money you will have
// when you retire
#include "compoundCalc.h"
#include <cmath>

int main()
{
  // variable declarations
  int p, t;
  double r, rt;

  //askes the user for information to calculate retirment funds
  cout << "What is your principal/present value?\n";
  cin >> p;
  cout << "what is your interest rate?\n";
  cin >> r;
  cout << "how many years will this money be left in your account?\n";
  cin >> t;

  // calling function to get retirment savings
  rt = compoundCalc(p, r, t);

  // prints info calculated form function above to screen
  cout << "Your retirement savings will be $" << rt << endl;

  return 0;

}
