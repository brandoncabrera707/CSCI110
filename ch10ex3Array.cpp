#include <iostream>
using namespace std;

// Function to display basic information about AHP program
void displayInfo(){
    string name;
    cout <<"Automated Highway Patrol Program (AHP)" << endl;
    cout << "Version: 1.0." << endl;
    cout << "Name of user: ";
    cin >> name;
    cout <<"Instruction: Input data to determine ticket violation and cost of ticket" << endl;
}

// Defining module that asks the user to input the license plate of the car
// Passing plate as a reference so we can use later down the line
string plateNumber(string &plate){
    while(true){
        cout << endl << "Enter the license plate number --> ";
        cin >> plate;
        if (plate == "QUIT"){
            break;
        }
    }
    return plate;
}

// Function to calculate ticket violation
int calcTicket(int &speedLimit, int &speedRecorded){
    int amountOver = 0;
    cout << "Enter current vehicle's speed --> " ;
    cin >> speedRecorded;
    cout << "Enter the speed limit of the zone --> "; 
    cin >> speedLimit;
    if (speedLimit < speedRecorded){
        amountOver = speedRecorded - speedLimit;
        cout << "The amount over is " << amountOver << " mph" << endl;
    }
    else{
        cout << "The vehicle was not over the speed limit, so no violation" << endl;
    }
    return amountOver;
}

// Function to calculate ticket cost based on the amount over the speed limit
double calculateTicketCost(int amountOver){
    double base = 150.0;
    double feePerMphOver = 5.0; // Initial fee per mph over the limit

    if(amountOver <= 20){
        return base + feePerMphOver * amountOver;
    }
    else if(amountOver > 20 && amountOver <= 50){
        return base + 20 * feePerMphOver + (amountOver - 20) * 10;
    }
    else{
        return 1000.0; // Ticket cost for exceeding 50 mph over the limit
    }
}

int main(){
    int speedLimit;
    int speedRecorded;
    int totalTicketedVehicles = 0;
    double totalTicketCost = 0.0;

    displayInfo();
    string plate;
    while(true){
        plateNumber(plate);
        if (plate == "QUIT"){
            break;
        }
        int amountOver = calcTicket(speedLimit, speedRecorded);
        if(amountOver > 0){
            totalTicketedVehicles++;
            double ticketCost = calculateTicketCost(amountOver);
            totalTicketCost += ticketCost;
            cout << "Ticket cost: $" << ticketCost << endl;
        }
    }
    
    // Display average number of ticketed vehicles and average ticket cost
    if(totalTicketedVehicles > 0){
        cout << "Tickets were given to " << totalTicketedVehicles << " out of " << totalTicketedVehicles << " vehicles." << endl;
        cout << "Average ticket amount: $" << (totalTicketCost / totalTicketedVehicles) << endl;
    }
    else{
        cout << "No tickets were issued." << endl;
    }
    
    cout << "Thank you for using our AHP program." << endl;
    
    return 0;
}
