#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double age, totalAge = 0, averageAge, counter, number;
  cout << "How many ages do you want to enter" << endl;
  cin >> number;
  while( counter < number){
    cout << "Enter the age" << endl ;
    cin >> age;
    totalAge = totalAge + age;
    counter++;
  }
  averageAge = totalAge/number;
  cout << fixed << showpoint << setprecision(1);
  cout << "The average age is " << averageAge << endl;
  return 0;
}