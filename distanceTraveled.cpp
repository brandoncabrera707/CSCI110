#include <iostream>
using namespace std;

int main(){
  int hours;
  int velocityMPH;
  cout << "Enter the time in hours " << endl;
  cin >> hours;
  cout<< "Enter the speed of the vechile " << endl;
  cin >> velocityMPH;
  int hour = 1;
  while (hour <= hours ){
   int distance = hour * velocityMPH;
  cout << " Hour: " << hour << "  " << "Distance traveled: " << distance << endl;
  hour++;
  
  
  } 
return 0;
 
}
