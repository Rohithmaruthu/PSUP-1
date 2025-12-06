// Techniques to Extract Digits

// Counts how many digits are there in a given number like 12345.

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int num;
    cin >> num;
    
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }

    cout << count;

    return 0;
}
