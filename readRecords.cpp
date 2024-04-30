#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
  string name, department;
  int idNumber;
  const int size = 3;
  int array[size];
  int counter = 0;
  ifstream employeeFile;
  employeeFile.open("employee.dat");
  while(employeeFile>>name>>idNumber>>department){
    cout << "name:" << name << endl;
    cout << "idNumber: " << idNumber << endl;
    cout << "department: " << department << endl;
    cout << endl;
    counter++;
   }
  
  return 0;
}