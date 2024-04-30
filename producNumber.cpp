#include <iostream>
using namespace std;
 bool isValid(int model){
  bool status;
  if (model != 100 && model != 200 && model != 300)
  
  {
    status = true ;
  
  }

 else
{
  status = false;
}
  return status;

 }


int main(){
  int modelNumber;
  cout << "Enter model number " << endl;
  cin >> modelNumber;
  while (isValid(modelNumber)){
    cout << "incorrect module number, please choose another number" << endl;
    cout << "Enter another number " << endl;
    cin >> modelNumber;

  }
  cout<<"Correct model number" << endl;
  return 0;
}