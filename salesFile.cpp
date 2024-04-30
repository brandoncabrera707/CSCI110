#include <iostream>
#include <fstream>
using namespace std;
int main(){
  int counter, numDay;
  double sales;
  ofstream salesFiles;
  cout << "For how many do you make sales"<< endl;
  cin >> numDay;
  salesFiles.open("sale.txt");
  for(counter = 1; counter <= numDay; counter++){
    cout << "Enter the sales for day# "  << counter << endl;
    cin >> sales;
    salesFiles << sales << endl;
  }
  salesFiles.close();
  return 0;
 
}