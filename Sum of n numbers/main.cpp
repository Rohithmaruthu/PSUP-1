/*
Problem Statement
Last saved: 12:57 AM
Given n as input. You need to write a program to find sum of 1 to n terms.

Example-1:

Input:
6  
Output:
21
Explanation:
The input is 6, so the program calculates the sum of the first 6 natural numbers: 1+2+3+4+5+6=21
Example-2:

Input:
5  
Output:
15
Explanation:
The input is 5, so the program calculates the sum of the first 5 natural numbers: 1+2+3+4+5=15
Note: Make use of long long int in C++ to store a large value.

Constraint: The input must be a positive integer
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  // Enter your code below

  long long int n;
  cin >> n;

  long long int sum = 0;
  int i = 1;

  do{
    sum += i;
    i++;
  } while(i <= n);

  cout << sum;

  return 0;
}