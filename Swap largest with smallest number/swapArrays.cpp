/*
Problem Statement
Last saved: 10:40 AM
You are given an array of integers. Your task is to write a program to swap the largest and smallest element in the array.

Input:

The first line contains an integer n, the size of the array.
The second line contains n space-separated integers, representing the elements of the array.
Output:

Print the modified array after swapping the largest and smallest elements.
Example 1:

Input:

5  
10 2 3 4 1  
Output:

1 2 3 4 10
Explanation:

The largest element (10) and smallest element (1) are swapped in the array.
Example 2:

Input:

6  
15 8 20 5 10 3  
Output:

15 8 3 5 10 20
Explanation:

The largest element (20) and smallest element (3) are swapped in the array.
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
  int arr[6];

  for (int i = 0; i < 6; i++) {
    cin >> arr[i];
  }

  int minIdx = 0;
  int maxIdx = 0;

  for (int i = 0; i < 6; i++) {

    if (arr[i] > arr[maxIdx]) {
      maxIdx = i;
    }
    if (arr[i] < arr[minIdx]) {
      minIdx = i;
    }
  }

  int temp = arr[minIdx];
  arr[minIdx] = arr[maxIdx];
  arr[maxIdx] = temp;

  for (int i = 0; i < 6; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}