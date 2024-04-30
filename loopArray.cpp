#include <iostream>
using namespace std;

int main(){
  const int SIZE = 3;
  int number[SIZE];
  int index = 0;
  
  for (index; index<SIZE; index++){
  cout << "Input a number"<< index+1<< endl;
  cin>> number[index];
  }

  for (int index = 0; index<SIZE; index++)
    cout<< "The element " << index+1 << " is " << number[index] << endl;





}