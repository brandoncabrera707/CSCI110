#include <iostream>
#include <fstream>
using namespace std;

int main(){
  string name, department;
  int idNumber, numEmployees, counter;
  ofstream employeeFile;
  cout << "how many employee records do you want to create?" << endl;
  cin >> numEmployees;
  employeeFile.open("employees.dat");
  for (counter = 1; counter <= numEmployees; counter++){
    cout << "Enter the name of employees:" << endl;
    cin >> name;
    cout << "Enter the employee's id number:" << endl;
    cin >> idNumber;
   cout << "Enter the employee's department" << endl;
   cin >> department;
   employeeFile << name << " "<< idNumber << " " << department << endl;


  }
  employeeFile.close();
  return 0;
}