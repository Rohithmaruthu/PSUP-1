/*
Problem Statement
Last saved: 2:32 PM
Write a program to print "E" if any even element is present in the array, otherwise print "O". Take the Input of N and in the next line take the Input of N elements of the array.

Example-1:
Input:
6
1 3 5 7 9 3
Output: O
Explanation:
No even element is present in the array.

Example-2:
Input:
5
1 3 5 8 2
Output:
E
Explanation:
The array contains the even numbers 8 and 2, so the output is "E".


CPP
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // Enter your code below

    // int n;
    // cin >> n;

    int arr[10];

    for (int i = 0; i < 10; i++){
    cin >> arr[i];
    }

    bool isEven = false;

    for (int i = 0; i < 10; i++) {
    if (arr[i] % 2 == 0){
        isEven = true;
        break;
    }
    }

    if (isEven) {
    cout << "E";
    } else {
    cout << "O";
    }

    return 0;
}