#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


  string enterName(){
  string name;
  cout << "Enter your name:" << endl;
  cin >> name;
  return name;

}
int randEquation(int &number1, int &number2){
  number1 = rand() %500 + 1;
  number2 = rand() %500 + 1 ;
  return 0;
}
int equationQuestion(int number1, int number2){
  int userAnswer;
  cout << "Equation is " << number1 << " + " << number2 << endl;
  cin >> userAnswer;
  return userAnswer;
}
void displayInfo(int right, string studentName){
  cout << "Information for " << studentName<< endl;
  cout << "Amount of right numbers: " << right<< endl;
  
}
int main(){
  int counter, right = 0, number1, number2, answer;
  string studentName;
  srand(time(0));
  studentName = enterName();
  for(counter = 1; counter <= 5; counter++){
  randEquation(number1, number2);
  answer = equationQuestion(number1, number2);
    if(answer == number1 + number2){
        cout << "Right"<< endl;
        right = right + 1;
    }
    else{
      cout<< "Wrong" << endl;

    }  
  }
  displayInfo(right, studentName);

}