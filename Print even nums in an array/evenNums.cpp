/*
    Problem Statement
    Write a program to initialise an array of size 10 and print the even elements

    Example-1:

    Input: 2 3 4 5 6 7 8 9 3 7  
    Output: 2 4 6 8  
    Explanation: Only even elements are printed from the given array of size 10.
    Example-2:

    Input: 3 2 1 4 3 2 1 8 9 7  
    Output: 2 4 2 8 
    Explanation: Only even elements are printed from the given array of size 10.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // Enter your code below

    int array[10];

    for (int i = 0; i < 10; i++) {
        cin >> array[i];

        if(array[i] % 2 == 0) {
            cout << array[i] << " ";
        }
    }


    return 0;
}