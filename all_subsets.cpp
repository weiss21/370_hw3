/*
 * Title: all_subsets.cpp
 * Abstract: should read n characters from a user and display all subsets of the characters.
 * Author: Wais Robleh
 * ID: 1624
 * Date: 01/20/2020
 */
 
#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstring>

using namespace std;

void subsets(char *arr, char *sub ,int index){
    if(index == strlen(arr)){
        cout << "{";
        for(int k = 0; k < strlen(sub); k++){
            cout << sub[k];
        }
    cout << "}" << endl;
    } else {
        sub[index] = ' ';
        subsets(arr, sub, index + 1);
        sub[index] = arr[index];
        subsets(arr, sub, index+1);
    }
}


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
    // Use Pow subset array will be in 2^n. N being the input number.
    int power = pow(2,number);
    char *sequel = new char[power];
    
    
    cout << "===== All Subsets =====" << endl;
    subsets(dynamArray, sequel ,0);
    
    /*
    cout << "{";
    for(int k = 0; k < number; k++){
        cout << dynamArray[k];
        if (k < number - 1){
            cout << ",";
        }
    }
    cout << "}";
    */
    delete[] dynamArray; //delete dynamic array
    delete[] sequel;
    
    return 0;
}
