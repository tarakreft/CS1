//
//  a02.cpp
//  Created by Tara Kreft on 4/23/17.
//  Sources: none other than the Malik book
//

#include <iostream>
#include <iomanip>

using namespace std;

//these variables are declared outside int main() because they are const (will not change)
const double dayShiftRate = 12.50;
const double nightShiftRate = 17.25;

int main() {
    
    int dayHours;
    int nightHours;
    double dayPayEarned;
    double nightPayEarned;
    double totalEarned;
    
    cout << "How many hours did you work this week on day shift? Type the total and press enter:" << endl;
    
    cin >> dayHours;
    
    cout << "How many hours did you work this week on night shift? Type the total and press enter:" << endl;
    
    cin >> nightHours;
    
    //This line forces the program to display a fixed amount of decimal places, set to two
    cout << fixed << showpoint << setprecision(2);
    
    //calculate the amount earned in the day, in the night, and total, and assign those
    //values to the variables declared at the beginning of int main()
    dayPayEarned = dayHours * dayShiftRate;
    nightPayEarned = nightHours * nightShiftRate;
    totalEarned = dayPayEarned + nightPayEarned;
    
    //output the total of the amount earned in the day, night, and total to the employee
    cout << "Your weekly wage earned at day shift: " << dayPayEarned << endl;
    cout << "Your weekly wage earned at night shift: " << nightPayEarned << endl;
    cout << "Your total weekly wage is: " << totalEarned << endl;

    
    return 0;
    
}
