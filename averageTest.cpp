#include <iostream>
using namespace std;

int main(){
  double firstScore, secondScore, thirdScore, average;

  cout<< "Enter the first score:" <<endl;
    cin>> firstScore;
  
  cout<< "Enter the second score:" <<endl;
  cin>> secondScore;

  cout<< "Enter the third score:" <<endl;
    cin>> thirdScore;
  average = (firstScore + secondScore + thirdScore) /3;
  cout << "This is the average:" << average << endl;
 if(average >90)
   cout<< "congrats! Great job!"<< endl;
 

  

  return 0;
}