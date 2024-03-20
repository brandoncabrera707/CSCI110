#include <iostream>
using namespace std;

  int main(){
    int counter =1;
    cout << "This is while loop results:" << endl;
    while (counter <=5)
    {
      cout << "Hello" << endl;
      counter++ ;
    }

    counter = 1;
    cout<< "this is the do while loop results"<<endl;
    do
    {
      cout<< "hello"<< endl;
      counter ++;
    } while (counter <=5);
     
    
    

    return 0;
    
  }