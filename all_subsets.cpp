/*
 * Title: all_subsets.cpp
 * Abstract: should read n characters from a user and display all subsets of the characters.
 * Author: Wais Robleh
 * ID: 1624
 * Date: 01/20/2020
 */
 
#include <iostream>
#include <string>
#include <cstring>

using namespace std;


int main() {
    
    int number, i;
    char word;
    char *dynamArray;
    
    cout << "Number of input characters: ";
    cin >> number;
    
    dynamArray = new char[number]; //initialize dynamic array
    cout << "Enter " << number <<  " characters: "; //ask for string input characters
    while (i < number){
        cin >> word;
        dynamArray[i] = word;
        i++;
    }
    
    
    
    
    cout << "===== All Subsets =====" << endl;
    cout << "{";
    for(int k = 0; k < number; k++){
        cout << dynamArray[k];
        if (k < number - 1){
            cout << ",";
        }
    }
    cout << "}";

    delete[] dynamArray; //delete dynamic array
    
    return 0;
}
