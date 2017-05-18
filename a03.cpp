//
//  a03.cpp
//  Created by Tara Kreft on 4/30/17.
//  Sources: None other than Malik book
//

#include <iostream>
#include <iomanip>


using namespace std;

const double adultPrice = 147.30;
const double seniorPrice = 137.75;
const double childPrice = 110.25;

int main()
{
    int purchaserAge;
    int wantsTickets;
    int adultTally;
    double adultCost;
    int seniorTally;
    double seniorCost;
    int childTally;
    double childCost;
    int infantTally;
    int guestTotal;
    int bags;
    int bagTotalCost;
    double totalPurchaseCost;
    
    
    cout << "Please type your age and press the enter key: " << endl;
    cin >> purchaserAge;
    
    if(purchaserAge < 18)
        cout << "I'm sorry, you are not old enough to purchase tickets." << endl;
    else {
        cout << "Would you like to purchase tickets today? please type a 1 for yes or a 0 for no and press the enter key: " << endl;
        
        cin >> wantsTickets;
        
       switch (wantsTickets)
        {
            case 1:
                cout << "How many adult tickets would you like? please enter a number and press enter: " << endl;
                cin >> adultTally;
                
                cout << "How many senior tickets would you like? please enter a number and press enter: " << endl;
                cin >> seniorTally;
                
                cout << "How many child tickets would you like? please enter a number and press enter: " << endl;
                cin >> childTally;
                
                cout << "How many infant tickets would you like? please enter a number and press enter: " << endl;
                cin >> infantTally;
                
                cout << "How many bags are you bringing? please enter a number and press enter: " << endl;
                cin >> bags;
                break;
            case 0:
                break;
            default:
                cout << "That is not a valid input.";
        }
        
        adultCost = adultPrice * adultTally;
        seniorCost = seniorPrice * seniorTally;
        childCost = childPrice * childTally;
        guestTotal = adultTally + seniorTally + childTally + infantTally;
        
        if(bags <= guestTotal)
            bagTotalCost = 20 * bags;
        else
            bagTotalCost = ((bags - guestTotal) * 35) + (guestTotal * 20);
        
        totalPurchaseCost = adultCost + seniorCost + childCost + bagTotalCost;
        
        cout << fixed << showpoint << setprecision(2);
        
        if(totalPurchaseCost != 0)
            cout << "Your total cost is: " << totalPurchaseCost << endl;
        else
            cout << "Thank you have a nice day" << endl;
        
    }
    
    return 0;
}
