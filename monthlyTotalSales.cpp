#include <iostream>
using namespace std;


double calcStateTax (double sales) {
  double stateTax = sales * 0.04;
  return stateTax;
}

double calcCountyTax(double amountToTax){
  double countyTax= amountToTax * 0.02;
  return countyTax;
}

double totalTax(double stateTaxcalc, double countyTaxCalc ){
  double totalTaxAmount = calcStateTax(stateTaxcalc) + calcCountyTax(countyTaxCalc)  ;
  cout << "The combined tax amount is " << totalTaxAmount << endl;
  return totalTaxAmount;
}

int main () {
  
  double totalSales, sTax, cTax, tTax;
  cout << "What was the total sales for the month before taxes?"<< endl;
  cin >> totalSales;
  sTax = calcStateTax(totalSales);
  cTax = calcCountyTax(totalSales);
  tTax = sTax + cTax;
  totalSales = totalSales - tTax;
  cout<< "The amount of State taxes was " << sTax << endl
   << "The total amount of County taxes was "<< cTax<< endl
   << "The total amount of tax was " << tTax << endl
   <<"The total amount of sales made with taxes included is " << totalSales << endl;

  return totalSales;
}