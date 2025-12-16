/*
    Problem Statement
        Given an array of size n, write a program to print the middle element.

        Example :
            Input:
                5
                10 20 30 40 50
            Output:
                30
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // Enter your code below

    //int n;
    //cin >> n;

    int array[10];

    for (int i = 0; i < 10; i++) {
        cin >> array[i];


    }

    int idx = 10 / 2;

    cout << array[idx];


    return 0;
}
