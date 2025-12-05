/*  
Problem Statement
Last saved: 10:36 AM
Write a program to find the absolute difference between the square of the sum and the sum of the squares of the first N natural numbers and the square of the sum.

N is an Input, find the absolute difference between:

The square of the sum of the first N natural numbers.
The sum of the squares of the first N natural numbers.
Input Format
A single integer N (1 ≤ N ≤ 1000), representing the number of natural numbers to consider.

Output Format
A single integer representing the absolute difference between the two computed values.

Constraints

1 ≤ N ≤1000
Use mathematical formulas to optimize the calculations.
Example 1:

Input:
10  

Output:
2640

Explanation:
- The sum of the squares of the first ten natural numbers is 1^2+2^2+3^2+4^2+....+10^2=385. 
- The square of the sum of the first ten natural numbers is, (1+2+...+10)^2=3025. 
- Hence the absolute difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385=2640
Example 2:

Input:
12  

Output:
5434

Explanation:
- The sum of the squares of the first twelve natural numbers is 1^2+2^2+3^2+4^2+....+12^2= 650
- The square of the sum of the first twelve natural numbers is, (1+2+...+12)^2=6084
- Hence the absolute difference between the sum of the squares of the first twelve natural numbers and the square of the sum is 6084 - 650 = 5434.
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

    int x = 0;
    int y = 0;

    for (int i = 1; i <= n; i++) {
        x += i*i;
        y += i;
    }

    int diff = y*y - x;
    cout << diff;
  

  return 0;
}