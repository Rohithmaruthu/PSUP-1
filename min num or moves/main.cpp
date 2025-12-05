/*
Problem statement
You are given two integers a and b.

In one move, you can choose some integer k from 1 to 10 and add it to a or subtract it from a. In other words, you choose an integer k∈[1;10] and perform a:=a+k or a:=a−k. You may use different values of k in different moves.

Your task is to find the minimum number of moves required to obtain b from a.

There will be t independent test cases your program is tested against.

Input Format:
The only line of the test case contains two integers a and b (1≤a,b≤10^9).

Output Format:
For each test case, print an integer i.e the minimum number of moves required to obtain b from a.

Example:

Input:  
13 42    

Output:
3
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // Enter your code below

    int a, b;
    cin >> a >> b;

    int diff = abs(a - b);

    int moves = diff / 10;

    if (diff % 10 != 0) {
        moves += 1;
    }

    cout << moves << endl;
    return 0;
}
