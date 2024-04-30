#include <iostream>
#include <fstream>
using namespace std;

int main(){
  const int size = 5;
  int number;
  int array[size];
  int index =0;
  ifstream numberFile;
  numberFile.open("values.dat");
  while((numberFile >> number) && (index < size) ){
    array[index] = number;
    index++;
  }
  numberFile.close();
  for (int i = 0; i < size; i++)
  {
    cout << array[i] << endl;
  }
return 0;
  
}