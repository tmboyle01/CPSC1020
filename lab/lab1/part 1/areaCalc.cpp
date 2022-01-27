// this program askes the user to pick a shape and then finds
// the area of that shape.
// Taylor Boyles
#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
  const double PI = 3.14159;
  double num, Slength,  radius, Tlength1, Tlength2, areaS, areaC, areaT; // variable declaratins

  // prints the different shapes with their coresponging numbers
  cout << "1 -- square\n";
  cout << "2 -- circle\n";
  cout << "3 -- right triangle\n";
  cout << "4 -- quit\n\n";

  // askes user to pick a shape
  cout << "To find the area of one of the above shapes enter its corisponding number: \n";
  cin >> num;

  // checks to see if user entered 1, and if so finds area of square
  if(num == 1){
    cout << "What is the length of one side?\n";
    cin >> Slength;
    areaS = Slength * Slength;
    cout << setprecision(2);
    cout << "Area = " << fixed << areaS << endl;
  }
  // checks to see if user entered 2 and if so finds area of circle
  else if(num == 2){
    cout << "Radius of the circle:\n";
    cin >> radius;
    areaC = PI * (radius * radius);
    cout << setprecision(2);
    cout << "Area = " << fixed << areaC << endl;
  }
  // checks to see if user enterd 3 and of so finds the are of right triangle
  else if(num == 3){
    cout << "What is the length of one of the side?\n";
    cin >> Tlength1;
    cout << "what is the length of the other side?\n";
    cin >> Tlength2;
    areaT = (Tlength1 * Tlength2)/2;
    cout << setprecision(2);
    cout << "Area = " << fixed << areaT << endl;
  }
  // checks to see if user entered 4 and if so ends function
  else if (num == 4){
    return -1;
  }
  // if user enters anything else besides 1-4 the program will print the below message
  // and end the program
  else{
    cout << "You entered an invalid choice. Good bye!\n";
    return -1;
  }

  return 0;
}
