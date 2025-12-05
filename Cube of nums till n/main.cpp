/*
Problem Statement
Last saved: 12:49 AM
Write a program to calculate the cube of all numbers from 1 to n where n is an Input number.

Input Format:

A single positive integer n will be provided as input.
Output Format:

The output will consist of the cubes of the numbers from 1 to n, inclusive.
The cubes should be printed on a single line, separated by spaces.
No trailing spaces should be present.
Sample Input:
3

Output:
1 8 27

Explanation:
The cube from 1 to 3 are 1, 8, and 27.
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

  do{
    cout << pow(i,3) << " ";
    i++;
  } while(i <= n);

  return 0;
}