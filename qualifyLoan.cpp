#include <iostream>
using namespace std;

int main(){
double annualSalary, yearsAtJob;
cout<< "Enter your annual salary"<<endl;
cin>>annualSalary;

cout<< "Enter your years at the job"<<endl;
cin>>yearsAtJob;
cout << "based on the information, annual salary is: " << annualSalary<< " and the years at the job is " << yearsAtJob<< " years"<< endl; 

if (annualSalary >= 10000 && yearsAtJob >=2){
    cout<< "you qualify for the loan" <<endl;
}  
   else if ( yearsAtJob < 2 && annualSalary <= 10000){
   cout<< "You must have at least 2 years at the job and need to make at least 10000 to qualify" << endl;
  }



  


  return 0;
}