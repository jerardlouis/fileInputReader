/*
=========================================================================================================
Jerard Dayanghirang Guevarra
CS280
February 3rd, 2020
Lab2
=========================================================================================================
*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    
    string inputLine; // holds the lines input by cin
    int n1 = 0; // number of lines
    int n2 = 0; // length of longest line
    int n3 = 0; // number of ints
    
    while(getline(cin,inputLine)) {
        
        n1 ++; // increment the number of lines

        if(inputLine.length()>n2){ // if the current line is longer than the current longest line
            n2 = inputLine.length(); // set the length of this line as the longest line value
        }
        
        
        for(int i = 0; i < inputLine.length(); i++){ // iterate through characters in string to check for digits

            if(i == 0 || isspace(inputLine[i-1])){  // if beginning of line or previous character is blank continue

                if(isdigit(inputLine[i])){ // if character at index i is a digit, check if next digits are digits

                    while(isdigit(inputLine[i]))

                        i++;

                    if(isspace(inputLine[i]) || inputLine[i] == '\0') 
                        // check if value is space (end of integer) or null (end of input)

                        n3++;

                }

            }

        }
		
    }
    
    cout<<"NUMBER OF LINES: "<< n1 << endl; 

    cout<<"LENGTH OF LONGEST LINE: "<< n2 <<endl; 

    cout<<"NUMBER OF INTEGERS: "<< n3 <<endl;


    return 0;
    
};