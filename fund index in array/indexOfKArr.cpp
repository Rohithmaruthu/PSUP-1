/*
Problem Statement
Last saved: 2:49 PM
For the given array and the given element k, write a program to print it's index if it is present in the array or print -1.

Input format: First line of input is number of elements of the array. Second line is elements of array. The last line of input is the value K.

Output format: Index of element or -1 if doesn't exist.

Example:
Input:
5
10 20 30 40 50
50
Output:
4

Input:
4
1 2 3 4
5
Output:
-1
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


    int arr[10];

    for (int i = 0; i < 10; i++) {
    cin >> arr[i];
    }

    int x;
    cin >> x;

    int output = -1;

    for (int i = 0; i < 10; i++) {
    if (arr[i] == x) {
        output = i;
        break;
    }
    }

    cout << output;


    return 0;
}