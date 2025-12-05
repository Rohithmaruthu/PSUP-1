/*
Problem Statement
Last saved: 12:41 AM
Given a number n, write a program to print the table of a number n. Print the multiples from 1 to 10.

Example-1:

Input:
5  

Output:
5 10 15 20 25 30 35 40 45 50

Explanation:
The input is 5, so the program prints the multiplication table of 5, starting from 1 to 10.
Example-2:

Input:
7  

Output:
7 14 21 28 35 42 49 56 63 70

Explanation:
The input is 7, so the program prints the multiplication table of 7, starting from 1 to 10.
Constraints:

The input must be a non-negative integer
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

  int i = 1;

  do {
    cout << n*i << " ";
    i++;
  } while(i<=10);

  return 0;
}