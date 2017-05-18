//
//  a05.cpp
//  
//
//  Created by Tara Kreft on 5/17/17.
//  Sources: Malik book, also spoke about problem two with a friend, who suggested I figure out a way to
//  use the modulus and floating point numbers

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

bool isVowel(char charParam){
    bool vowel;
    switch(tolower(charParam)){
        case 'a':
            vowel = true;
            break;
        case 'e':
            vowel = true;
            break;
        case 'i':
            vowel = true;
            break;
        case 'o':
            vowel = true;
            break;
        case 'u':
            vowel = true;
            break;
        default:
            vowel = false;
            break;
    }
    return vowel;
}

void returnValue(char charIsVowel){
    if(isVowel(charIsVowel) == true){
        cout << charIsVowel << endl;
    } else {
        cout << "";
    }
}

void reverseDigit(int origNum){
    int remainder;
    int createRemainder;
    while(origNum != 0){
        createRemainder = origNum / 10;
        remainder = origNum % 10;
        cout << remainder;
        origNum = origNum / 10;
    }
}

int main() {
    char char1, char2, char3, char4, char5, char6, char7, char8, char9, char10;
    int originalNum;
    int reversedNum;
    
    cout << "Please type ten characters and press the enter key:" << endl;
    cin >> char1 >> char2 >> char3 >> char4 >> char5 >> char6 >> char7 >> char8 >> char9 >> char10;
    
    cout << "characters saved. You submitted the following vowels: " << endl;
    
    returnValue(char1);
    returnValue(char2);
    returnValue(char3);
    returnValue(char4);
    returnValue(char5);
    returnValue(char6);
    returnValue(char7);
    returnValue(char8);
    returnValue(char9);
    returnValue(char10);
    
    cout << "Please enter an integer to be reversed and press the enter key:" << endl;
    
    cin >> originalNum;
    
    cout << "Your number reversed is: " << endl;
    reverseDigit(originalNum);
    
    return 0;
}




































