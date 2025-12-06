// Takes a number like 1234 and flips its digits to get 4321.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // Enter your code below
    int num = 12345;
    int rev = 0;

    while (num > 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    cout << "Reversed: " << rev;

    return 0;
}