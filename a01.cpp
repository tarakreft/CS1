//
//  a01.cpp
//  Temperature
//  Created by Tara Kreft on 4/16/17

#include <iostream>

using namespace std;

//declaration for degrees Fahrenheit
int degrees_f;

int main() {
    
    cout << "Enter temperature in Fahrenheit:";
    
    //assign user input to int degrees_F
    cin >> degrees_f;
    
    //output required string that includes the formula for converting Fahrenheit to Celcius cast as a double
    cout << "The temperature " << degrees_f << " Fahrenheit is equivalent to " <<
    static_cast<double>(degrees_f - 32) * 5 / 9 << " Celsius.";
    
    return 0;
}
