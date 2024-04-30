#include <iostream>
#include <fstream>

using namespace std;

int main(){
  const int SIZE=5;
  int numbers[SIZE] = {10,20,30,40,50};
  ofstream numberFile;
  numberFile.open("values.dat");
  for (int index = 0; index<SIZE; index++){
      numberFile << numbers[index] << " ";

  }
  numberFile.close();
  return 0;
}