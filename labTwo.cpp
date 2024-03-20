#include <iostream>
using namespace std;

int main(){
  //The following is declaring the datatypes and variableNames that will be used in the program
  string studentName, degreeName;
  double creditsTaken, creditsDegree, creditsLeft;
  //The following are prompts for asking the user to input information pertaining to the variables declared
  cout << "Enter student's first name: ";
  cin >> studentName;
  cout<< "Enter degree name: " ;
  cin >> degreeName;
  cout << "Enter the number of credits required: " ;
  cin >> creditsDegree;
  cout << "Enter the number of credits taken so far: " ;
  cin >> creditsTaken;
  //Setting the value of creditsLeft equal to creditsDegree - creditsTaken to get the value for creditsLeft
  creditsLeft = creditsDegree - creditsTaken;
  cout << "Student's first name is " << studentName << endl;
  cout << "The degree name is " << degreeName << endl;
  cout << "There are " << creditsLeft << " credits left until graduation" << endl;

return 0; 
  
}