#include <iostream>
using namespace std;

 int sum(int num1, int num2){
  int result;
  result = num1 + num2;
  return result;
}

int main(){
  int firstAge, secondAge, total;
  cout << "Enter your age: " << endl;
  cin >> firstAge;

  cout<< "Enter your best friend's age: " << endl;
  cin >> secondAge;

  total = sum(firstAge, secondAge);

  cout<< "Together you are " << total << " years old." << endl;
  return 0;


}