#include <iostream>
using namespace std;

int minutesAllowed(int &number){
 
  cout << "how many minutes were you allowed" << endl;
  cin >> number;

  while(number < 200 || number > 800){
    cout << "Please enter a number in between 200-800, input minutes allowed again"<< endl;
    cin >>number;
  }

  cout << "You were allowed: " << number << " minutes"  <<endl;
  return number;
  
}
int minutesUsed(int &minutes) {
  
  cout << "How many minutes did you end up using" << endl;
  cin >> minutes;
  while (minutes< 0 ){
    cout << "Please enter a number from starting from 0" << endl;
    cin >> minutes;
  }
  cout << "You used: " << minutes << " minutes" << endl;
  return minutes;
}

int minutesOver(int number, int minutes){
    cout << "You used " << minutes<< "/" << number << " minutes"<<endl;
  if (minutes < number){
    cout << "You did not go over the number of minutes allowed so no fee will be applied so the amount due at the end of month is $74.99" << endl;
  }
  else if (minutes > number)
  {
    int amountOver = minutes- number;
    cout << "You went over " << amountOver << " minutes over the minutes allowed: " << minutes << endl;
   double overFee =  amountOver * 0.20;
   double total = 74.99 + overFee;
   cout << "The fee per minute over is $0.20, your new total due at the end of the month your contract of 74.99 with fees is now: " << total << endl;
   
  }
  
   
  
  return 0;
 

}

int main(){
int number, minutes;
 minutesAllowed(number);
 minutesUsed(minutes);
 minutesOver(number, minutes);
 }
  
