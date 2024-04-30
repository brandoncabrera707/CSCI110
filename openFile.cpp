#include <iostream>
#include <fstream>
using namespace std;

int main(){
  string name;
  ofstream openFile;
  cout << "enter your name" << endl;
  openFile.open("my_name.dat");
  cin >> name;
  openFile << name;
  openFile.close();

}