#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double age, totalAge = 0, averageAge,counter = 0, number;
    cout << "How many ages do you want to enter: ";
    cin >> number;
    do {
        cout << "Enter the age: ";
        cin >> age;
        totalAge += age;
        counter++;
    } while (counter < number);

    averageAge = totalAge / number;
     cout << fixed << showpoint << setprecision(1);
    cout << "The average age is " << averageAge << endl;
   


    return 0;
}