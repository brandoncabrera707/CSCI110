#include <iostream>
using namespace std;

int getSales(double &monthlySales){
    cout << "Enter the total sales for the month" << endl;
    cin >> monthlySales;
    return 0;
}

int storeBonus(double monthlySales, double &storeAmount){
    if (monthlySales >= 110000){
        storeAmount = 6000;
    }
    else if(monthlySales >= 100000){
        storeAmount = 5000;
    }
    else if(monthlySales >= 90000){
        storeAmount = 4000;
    }
    else if(monthlySales >= 80000){
        storeAmount = 3000;
    }
    else {
        storeAmount = 0;
    }
    return storeAmount;
}

int getIncrease(double &salesIncrease){
    cout << "What was the percent of sales increase in decimal format?" << endl;
    cin >> salesIncrease ;
  return 0;
}

int empBonus(double salesIncrease, double &empAmount) {
    if (salesIncrease >= 0.05) {
        empAmount = 75;
    }
    else if (salesIncrease >= 0.04) {
        empAmount = 50;
    }
    else if (salesIncrease >= 0.03) {
        empAmount = 40;
    }
    else {
        empAmount = 0;
    }
    return empAmount;
}


int printBonus(double storeAmount, double empAmount){
    cout << "The store bonus is $" << storeAmount << endl;
    cout << "The employee bonus is $" << empAmount << endl;
    if(storeAmount == 6000 && empAmount == 75){
        cout << "Congratulations, you reached the highest bonuses possible!" << endl;
    }
    return 0;
}

int main() {
    double monthlySales, storeAmount, empAmount, salesIncrease;
    getSales(monthlySales);
    storeBonus(monthlySales, storeAmount);
    getIncrease(salesIncrease);
    empBonus(salesIncrease, empAmount);  
    printBonus(storeAmount, empAmount);

    return 0;
}
