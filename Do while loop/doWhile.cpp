// DO While loop

// syntax:
/*
    do {
        // Code to run
    } while (condition);
 */


// example: Count from 0 to 4

#include <iostream>
using namespace std;

int main() {
    int count = 0;

    do {
        cout << "count: " << count << endl;
        count ++;
    } while (count < 5);
    return 0;
}
