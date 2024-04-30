#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
  int counter = 1;
  double runningTime, total = 0;
  ifstream videoFiles;
  videoFiles.open("runningTime.dat");

  while(videoFiles >> runningTime){
    total = total+runningTime;
    cout << "The running time for video# " << counter << " is " <<runningTime << endl;
    counter++;
  }

  cout << "The total running time is " << total << endl;

  


  videoFiles.close();
  return 0;

  }
