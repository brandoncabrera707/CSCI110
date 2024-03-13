#include <iostream>
using namespace std;




void multiByTwo (int number){
  int result = number *2;
  cout << "The result is: " << result*2 << endl;

}

int main (){
  int num; 
  cout << "enter a number: " << endl;
  cin >> num;
 
 multiByTwo(num);
 return 0;
}