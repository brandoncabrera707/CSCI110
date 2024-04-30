#include <iostream>
using namespace std;

int main(){
  double fatGrams, carbGrams, calsFat, calsCarbs;
  cout << "Enter the number of fat grams consumed in a day" << endl;
  cin >> fatGrams;
  calsFat = fatGrams * 9;
  cout << "The number of calories from fats is " << calsFat << endl;
  cout << "Enter the number of carbohydrate grams in a day" << endl;
  cin >> carbGrams;
  calsCarbs = carbGrams * 4;
  cout << "The number of calories from carbohydrates is " << calsCarbs << endl;


}