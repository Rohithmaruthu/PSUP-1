/*
Print all vowels from a given string.Problem statement:
Write a program to print all the vowels of the Input string. Given that all the Input strings are in lowercase.

Input:  
kalvium

Output:  
aiu

Explanation:  
a, i, and u are the vowels in the given string.  
*/


#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  // Enter your code below

  string str;
  cin >> str;

  for (char c : str) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        cout << c;
    }
  }

  return 0;
}