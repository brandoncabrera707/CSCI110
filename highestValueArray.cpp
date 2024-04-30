#include <iostream>
using namespace std;

int main(){
  const int size = 6;
  int nums[size] = {5,3,4,10,1,8};
  int index = 0;
  int highestValue = nums[0];
  for(int i = 0; i < size; i++){
    if( nums[i] > highestValue){
      highestValue = nums[i];
      index = i;
      


     
      }
    
  cout << index << endl;
  cout << highestValue << endl;
  }


}
   
    
  
