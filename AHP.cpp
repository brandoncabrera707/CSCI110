#include <iostream>
#include <iomanip>
using namespace std;

//function to display basic information about AHP program

void displayInfo(){
  string name;
  cout <<"Automated Highway Patrol Program (AHP)" << endl;
  cout << "Version: 1.0." << endl;
  cout << "Name of user: ";
  cin >> name;
  cout <<"Instruction: Input data to determine ticket violation and cost of ticket, or type QUIT to stop inputting  " << endl;
  
}


//Defining module that asks the user to input the licensce plate of the car
//Passing plate as a refrence so we can use later down the line
string plateNumber(string &plate){
  plate;
  cout << endl << "Enter the licensce plate number --> ";
  cin >> plate;
  return plate;
}

//module to determine the miles over and the ticket cost depending on the amount over
int milesOver(int &speedLimit, int& speedRecorded, string &plate){
  speedLimit, speedRecorded;
  double amountOver = 0;
  cout << "Enter current vehicle's speed --> " ;
  cin >> speedRecorded;
  cout << "Enter the speed limit of the zone --> "; 
  cin >> speedLimit;
  if (speedLimit < speedRecorded){
    amountOver = speedRecorded - speedLimit;
    cout << "Vehcile traveled " << amountOver << " over the speed limit" << endl;
  }
  else{
    cout << "The vehicle was not over the speed limit, so no violation" << endl;
  }
  double base = 150.00;
  double mphFee;
  double totalFee;

  if (amountOver == 0){
    cout << "No ticket was given" << endl;
  }
  else if (amountOver <= 20){
    mphFee = 5.0;
    totalFee = base + (amountOver * mphFee);
    cout << fixed << setprecision(2);
    cout << "A ticket of $" << totalFee << " is issued to " << plate << endl;
    
  }
  
  else if (amountOver > 20 && amountOver <= 50){
    mphFee = 10.0;
    totalFee = base + (amountOver* mphFee);
    cout << fixed << setprecision(2);
    cout << "A ticket of $" << totalFee << " is issued to " << plate << endl;

  }
  else { // Amount over 50
    totalFee = 1000.0;
    cout << fixed << setprecision(2);
    cout << "The total ticket cost is $" << totalFee << endl;
    cout << "A ticket of $" << totalFee << " is issued to " << plate << endl;

  }
  

  return totalFee;
}



//Module to show an summary when user types in quit
void exitMessage(int ticketCount, double totalTicketCost) {
 int totalCars = ticketCount + 1; 
 double percentageTicketed = (static_cast<double>(ticketCount) / totalCars) * 100;
 cout << "Tickets were given to " << ticketCount << " out of " << totalCars << " vehicles." << endl;
 cout << "Percent of ticketed vehicles: " << percentageTicketed << "%" << endl;
 if (ticketCount > 0) {
      cout << "Average ticket amount: $"  << (totalTicketCost / ticketCount) << endl;
      } 
      else {
        cout << "No tickets were issued." << endl;
    }
    cout << "Thank you for using our enhanced AHP program." << endl;
}



int main() {
int speedLimit;
int speedRecorded;
double amountOver;
int ticketCount = 0;
double ticketCost = 0.0;
displayInfo();
string plate;
  while (true) {
  plateNumber(plate);
  if (plate == "QUIT") {
   cout << endl;
   exitMessage(ticketCount, ticketCost);
   break;
   }
   double totalCost = milesOver(speedLimit, speedRecorded, plate);
    if (totalCost > 0.0) {
     ticketCost += totalCost;
     ticketCount++;
    }

  }
    return 0;
}


