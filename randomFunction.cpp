#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  int number;
  unsigned seed = time(0);
  //cout<< seed <<endl;
  srand(seed);
  //number = rand();
  //cout << number << endl;
  

  //cout<< "The maximum number for the rand funcrion is " << RAND_MAX << endl;

  for (int counter= 0; counter <5 ; counter++){
    number = rand()%100 + 1;
    cout << number << endl;
  }
  return 0;
}