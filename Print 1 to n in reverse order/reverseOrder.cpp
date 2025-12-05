/*
Problem statement
Write a program to print 1 to n in reverse order.

Sample Input:
4

Output:
4 3 2 1

Explanation:
To print numbers from 1 to 4 it is, 1 2 3 4 and the reverse of the same is 4 3 2 1 
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i =n; i >=1; i--) {
        cout << i << " ";
    }

    return 0;
}
