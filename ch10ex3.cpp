#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

  int main(){
    srand(time(0));
    int num;
    ofstream numberFile;
    numberFile.open("numbers.txt");

    for (int i = 1 ; 1<=10; i++){
      num = rand()%50;
      numberFile << num << endl;

    }
   numberFile.close();
   
   ifstream readNumberFile;
   double average;
   readNumberFile.open("numbers.txt");
   int total = 0;
   int number;
   int largest = 0;
   while(readNumberFile >> number){
    total +=number;
    average = double(total) / 10;
    cout << number << endl;
    if (number > largest){
      largest = num;
    }
  
   }
   cout << "The total is "<< total<< endl;
    cout << "The total is "<< average<< endl;

   cout << "the average is" << average << endl;
   readNumberFile.close();
  return 0; 
  

   }

 