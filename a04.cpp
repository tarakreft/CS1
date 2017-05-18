//
//  a04.cpp
//  Created by Tara Kreft on 5/07/17.
//  Sources: Malik book, stack overflow to find out why the last student was listed twice on echo
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>


using namespace std;

int main()
{
    ifstream infile;
    string fileName, student, school;
    string sex;
    int score;
    double averageMale;   //74.40
    double averageFemale; //69.86
    double averageComm;   //71.40
    double averageUni;    //72.00
    double totalAverage;  //71.75
    int maleCount;
    int femaleCount;
    int commCount;
    int uniCount;
    int totalCount;
    
    //get file path and name and open file
    cout << "Please enter the path and name of your data file and press the enter key: " << endl;
    getline(cin, fileName);
    infile.open(fileName);
    
    //confirm file opened properly before continuing program
    if (!infile.is_open()) {
        cout << "I'm sorry, that file is not valid." << endl;
    } else {
        while (infile.peek() != EOF) {
            infile >> student >> sex >> school >> score;
            
            //break out of the loop before executing if End of File
            if(infile.peek() == EOF){
                break;
            }
            //echo the information back to the user
            cout << left << setw(15) << student << setw(3) << sex << setw(4) << school << setw(4) <<score << endl;
            
            //check for sex and add the score to the average male/female total
            if (sex == "M"){
                averageMale += score;
                maleCount++;
            } else if (sex == "F"){
                averageFemale += score;
                femaleCount++;
            }
            
            //check for what kind of education and add the score to uni/comm total
            if (school == "CC"){
                averageComm += score;
                commCount++;
            } else if (school == "UN"){
                averageUni += score;
                uniCount++;
            }
            
            //keep track of number of students and add each score to the complete total
            totalAverage += score;
            totalCount++;
        }
        
        //calculate totals and display to two decimal points
        cout << fixed << showpoint << setprecision(2);
        cout << "The average score for males is: " << averageMale / maleCount << endl;
        cout << "The average score for females is: " << averageFemale / femaleCount << endl;
        cout << "The average score for Community College students is: " << averageComm / commCount << endl;
        cout << "The average score for University students is: " << averageUni / uniCount << endl;
         cout << "The average score for all students is: " << totalAverage / totalCount << endl;
    
    infile.close();
    
    }
    
    return 0;
}
