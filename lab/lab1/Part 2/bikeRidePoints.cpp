// this program askes the user how many times they have riden their
// bike to campus and then caculates the points earned
// Taylor Boyles
#include <iostream>
using namespace std;

int main()
{
  int rides; // variable stores the users input

  // askes the user how many times they have riden to campus
  cout << "Enter the number of bike rides to campus you had this semester: ";
  cin >> rides;


  //while loop catches #'s less than 0 and askes the user for a posative #'
  while(rides < 0){
    cout << "Input was invalid, ender a new number: ";
    cin >> rides;
  }
  //if-else statements assign points to the different posative numbers
  if(rides == 0){
    cout << "You earned 0 points this semester\n";
  }
  else if(rides == 1){
    cout << "You earned 3 points this semester\n";
  }
  else if(rides == 2){
    cout << "You earned 10 points this semester\n";
  }
  else if(rides == 3){
    cout << "You earned 15 points this semester\n";
  }
  else if(rides == 4){
    cout << "You earned 30 points this semester\n";
  }
  else if(rides >= 5){
    cout << "You earned 50 points this semester\n";
  }

  return 0;
}
