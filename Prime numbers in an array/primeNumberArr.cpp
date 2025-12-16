#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // Enter your code below
    int arr[6];
    int primeCount = 0;

    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    for (int i = 0;  i < 6; i++ ){
        int num = arr[i];

        if (num <= 1) {
            continue;
        }

        bool isPrime = true;

        for (int j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            primeCount ++;
        }
    }

    cout << primeCount;


    return 0;
}