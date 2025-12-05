#include <iostream>
#include <climits>
using namespace std;

/*
Write a program that allows users to enter numbers unless the user enters 1 and then display the largest and smallest number respectively among all the numbers entered (including 1 as input).

Input Format

The user enters multiple integers one by one.

Input stops when the user enters 1.

All inputs are integers within the valid range of int.

Output Format

Print the largest number and smallest number among all inputs, including 1.

Output should be in the format: largest smallest

Example 1:

Input:
-23
2882
67
89
92
1

Output:
2882 -23

Explanation:
2882 is the greatest and -23 is the lowest number here
Example 2:

Input:
5
11
3
1

Output:
11 1

Explanation:
11 is the greatest and 1 is the lowest number here
Constraints

At least one input (1) is required to stop the loop.

All inputs are integers within the range: -2,147,483,648 to 2,147,483,647 (INT_MIN to INT_MAX).

The first number entered can be 1, in which case output should be 1 1
*/

int main() {
    int num;
    int largest = INT_MIN;
    int smallest = INT_MAX;
    
    while (true) {
        cin >> num;
        
        if (num > largest) {
            largest = num;
        }
        if (num < smallest) {
            smallest = num;
        }
        
        if (num == 1) {
            break;
        }
    }
    
    cout << largest << " " << smallest << endl;
    
    return 0;
}