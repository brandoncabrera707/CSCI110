#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
  string name1,name2,name3;
  ifstream myFile;
  myFile.open("names.txt");
  getline(myFile, name1);
  getline(myFile, name2);
  getline(myFile, name3);

  cout<<"here are the names"<< endl;


  cout<< name1 << endl;
  cout<< name2 << endl;
  cout<< name3 << endl;
  
  myFile.close();









  return 0;

}
