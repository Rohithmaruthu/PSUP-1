/*
Problem Statement
Last saved: 1:02 AM
Write a program to print the factors of a given number.

Example-1:
Input:
6
Output:
1,2,3,6,

Example-2:
Input:
11
Output:
1,11,
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  // Enter your code below

  int n;
  cin >> n;

  for (int i = 1; i <= n; i++){
    if (n%i == 0) {
      cout << i << ",";
    }
  }

  return 0;
}