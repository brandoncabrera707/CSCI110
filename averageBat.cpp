#include <iostream>
using namespace std;
int main(){
  int hits;
  int atBat;
  double battingAverage;

  cout << "Entet the player's number of hits" << endl;
  cin >> hits;

  cout << " Enthert the player number of times a t bat:" << endl;

  battingAverage = hits/atBat;
  cout << "The player's batting average is" <<battingAverage << endl;
}