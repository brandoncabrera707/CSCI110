#include <iostream>
#include <fstream>
using namespace std;

int main(){
  int numVids, counter; 
  double runningTimes;
  cout << "enter the number of videos you want to store" << endl;
  cin >> numVids;
  ofstream videoFiles;
  videoFiles.open("runningTime.dat");
  for(counter = 1 ; counter <= numVids; counter++){
   cout<< "Enter the running time for video # " <<counter << endl;
   cin >> runningTimes;
   videoFiles << runningTimes<< endl;
  }
 videoFiles.close();

}