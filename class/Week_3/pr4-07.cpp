// this program uses an if/else if statement to assign a lettre grade of A, B, C, D or F to a numeric test score

#include <iostream>
using namespace std;

int main()
{
  //Creat name constants so hold minimum score required for each letter grade.
  const int MIN_A_SCORE = 90,
    MIN_B_SCORE = 80,
    MIN_C_SCORE = 70,
    MIN_D_SCORE = 60;

  int testScore;  //holds a numeric test testScore
  char grade;    //holds a letter grade

  // Get the numeric testScore
  cout << "Enter your numeric test score and I will\n";
  cout << "tell you the letter grade you earned: ";
  cin >> testScore;


  // Determine the letter grade
  if (testScore >= MIN_A_SCORE)
    grade = 'A';
  else if (testScore >= MIN_B_SCORE)
    grade = 'B';
  else if (testScore >= MIN_C_SCORE)
    grade = 'C';
  else if (testScore >= MIN_D_SCORE)
    grade = 'D';
  else if (testScore >= 0)
    grade = 'f';


  // Display the letter grade

  cout << "your grade is " << grade << ".\n";

  return 0;
}
