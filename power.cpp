/*
 * Title: power.cpp
 * Abstract: compute 2n for a nonnegative integer n. Use recursive technique.
 * Author: Wais Robleh
 * ID: 1624
 * Date: 01/19/2020
 */
 
#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int recursive(int i);// so it can run. Must call before main.

int main() {
    
    int number;
    int result;
    
    cout << "Enter a number: ";
    cin >> number;
    
    result = recursive(number);
    //output below
    cout << "Result: " << result << endl;
    
    
    return 0;
}

int recursive(int n){
    if(n == 0){
        return 1;
    } else {
        return 2 * recursive(n - 1); //recursive formula
    }
}