#include <iostream>
using namespace std;
/* 
Write a program to print the odd number series up to N terms starting from 1.

Input:
5  

Output:
1 3 5 7 9  

Explanation:  
Odd number series starting from 1 up to 5 terms.
*/

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n*2; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    return 0;
}