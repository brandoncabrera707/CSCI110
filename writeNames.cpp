#include <iostream>
#include <fstream>
using namespace std;

int main(){
  ofstream myFile;
  myFile.open("names.txt");
  myFile << "John" << endl;
  myFile << "Kim" << endl;
  myFile << "Kate" << endl;

  myFile.close();
  return 0;


}