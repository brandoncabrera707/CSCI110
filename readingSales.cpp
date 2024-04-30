#include <iostream>
#include <fstream>
using namespace std;


int main(){
  string day1,day2,day3,day4,day5,day6,day7;
  ifstream salesFiles;
  salesFiles.open("sale.txt");
  getline(salesFiles, day1);
  getline(salesFiles, day2);
  getline(salesFiles, day3);
  getline(salesFiles, day4);
  getline(salesFiles, day5);
  getline(salesFiles, day6);
  getline(salesFiles, day7);

  cout << "here are the sales" << endl;
  cout << day1 << endl;
 cout << day2 << endl;
  cout << day3 << endl;
  cout << day4 << endl;
  cout << day5 << endl;
  cout << day6 << endl;
  cout << day7 << endl;

  



}