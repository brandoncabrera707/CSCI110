#include <iostream>
#include <iomanip>
using namespace std;


int main(){
  double age, totalAge = 0, averageAge, counter, number;
  cout << "How many ages do you want to enter" << endl;
  cin >> number;

  for( counter = 0; counter < number;counter++){
    cout << "Enter the age: " << endl ;
    cin >> age;
    totalAge = totalAge + age;
  }
  averageAge = totalAge/number;
  cout << fixed << showpoint << setprecision(1);
  cout << "The average age is " << averageAge << endl;
  return 0;
}