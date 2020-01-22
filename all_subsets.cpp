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

void subsets(char *arr, int num){
    
    // Use Pow subset array will be in 2^n. N being the input number.
    int power = pow(2,num);
    
    for (int k = 0; k < power; k++){
        cout << "{";
        for(int j = 0; j < num; j++){
            int temp = (1<<j);
            if(k & (1<<j)){
                cout << arr[j];
            }
            if(k == 0 && j == 0){
                cout << "empty";
            }
        }
        cout << "}" << endl;
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

    
    cout << "===== All Subsets =====" << endl;
    subsets(dynamArray, number);
    

    delete[] dynamArray; //delete dynamic array
    
    return 0;
}
