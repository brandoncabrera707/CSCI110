#include <iostream>
using namespace std;

int main(){
  int counter, square;
  const int Max_Value =10;

  cout << "number"<< "\t" << "square" << endl;
  cout << "............................" << endl;

  for (counter =1 ; counter <=Max_Value ; counter++){
    square = counter*counter;
    cout << counter << "\t" << square<<endl;
  }
  return 0;
}