#include <iostream>
using namespace std;
int main(){
  const int SIZE = 100;
  int values[SIZE];
  int count = 0;
  int number, index;
  cout << "Enter a number, or -1 to quit" << endl;
  cin >> number;

  while(number != -1 && count < SIZE){
    values[count] = number;
    count++;
    cout << "Enter a number, or -1 to quit" << endl;
    cin >> number;
  }
  cout << "Here are the values you entered: " <<endl;
  for (int i = 0; i<count; i++){
    cout << values[i] << endl;
  }
}
