#include <iostream>
using namespace std;
 int main(){
  double quantity, discountedAmount;
 cout<< "Enter the quantity" << endl;
 cin >> quantity;
 if ( quantity < 20 && quantity > 10){
  
   discountedAmount = quantity - (quantity * 0.20);
   cout << "Discounted amount is " << discountedAmount;
 }
  else if (quantity < 49 && quantity > 20) {
  
   discountedAmount = quantity - (quantity * 0.30);
   cout << "Discounted amount is " << discountedAmount;
  }
  else if(quantity < 99 && quantity > 50) {
  
   discountedAmount = quantity - (quantity * 0.40);
   cout << "Discounted amount is " << discountedAmount;
  }
  else if ( quantity > 100){ 
  
   discountedAmount = quantity - (quantity * 0.50);
   cout << "Discounted amount is " << discountedAmount;
  
 return 0;
  
  }
 }
 