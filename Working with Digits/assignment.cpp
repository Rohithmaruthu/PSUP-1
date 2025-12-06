/*
Problem Statement
Last saved: 9:42 AM
Write a program that takes a 4-digit number as input and calculates the following:

The sum of its digits.
The maximum digit.
The minimum digit.
Example:

Input:
4837

Output:
Sum of digits: 22
Maximum digit: 8
Minimum digit: 3
Explanation: 
The program calculates the sum of digits 4+8+3+7=22, maximum digit which is 8, and minimum digit which is 3 for the input 4837.
Constraint: The input should be a positive 4-digit integer.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  // Enter your code below

  int num;
  cin >> num;

  int sum = 0;
  int max = 0;
  int min =  num;

  while (num > 0) {
    int digit = num % 10;

    sum += digit;

    if (digit > max) {
      max = digit;
    }

    if (digit < min) {
      min = digit;
    }

    num /= 10;

  }

  cout << "Sum of digits: " << sum << endl;
  cout << "Maximum digit: " << max << endl;
  cout << "Minimum digit: " << min << endl;

  return 0;
}
