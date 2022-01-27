#include <cmath> // needed for pow() function

// function that calculates the retirement savings
double compoundCalc( int a, double b, int c) {

   double x;

   // formula to calculate retirement savings
   x = a * pow((1 + b),c);

   return x;
}
