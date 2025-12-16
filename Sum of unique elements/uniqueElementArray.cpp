/*
Problem Statement
Last saved: 9:57 AM
Sum of unique elements
Given a array of size n with repeating elements print the sum of the unique elements that are present in the array Example:
Input:
5
1 2 1 3 4

Output:
9
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

    int count = 0;

    

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++) {

        bool isUnique = true;

        for (int j = 0; j < 10; j++){
        if (i != j && arr[i] == arr[j]) {
            isUnique = false;
            break;
        }
        }

        if(isUnique) {
        count += arr[i];
        }


    }

    

    cout << count;


    return 0;
}