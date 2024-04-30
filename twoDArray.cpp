#include <iostream>
using namespace std;

int main(){
  const int rows = 5;
  const int cols = 5;
  int values [cols][rows];
  for (int row = 0 ; row <rows; row++){
    for (int col = 0; col < cols;col++){
      cout << "Enter a number" << endl;
      cin >> values[cols][rows];
      cout << values[cols][rows];

    }
  
  }
}