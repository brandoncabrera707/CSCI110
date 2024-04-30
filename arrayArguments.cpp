#include <iostream>
using namespace std;



int getTotal(int array[], int arraySize ){
  int index;
  int total = 0;
  for( index = 0; index < arraySize ; index++){
    total = total + array[index];

  }
return total;
}

int main(){
  const int SIZE = 5;
  int nums[SIZE] = {5,5,5,5,5};
  int sum = getTotal(nums, SIZE );
  cout << "The sum of the array elements is " << sum << endl;
  
  return 0;
}