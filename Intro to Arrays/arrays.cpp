#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // Enter your code below

    // Creating an array with initial values
    int numbers[] = {10, 20, 30, 40, 50}; 

    // data insertion
    
    int nums[5]; // Declare an array of 5 integers
    nums[0] = 10; // Assigns 10 to the first element
    nums[3] = 40; // Assigns 40 to the fourth element

    cout << nums[0] << endl;

    // data extraction

    int first_number = numbers[0];  // Retrieves the first element (10)
    int fourth_number = numbers[3];  // Retrieves the fourth element (40)

    cout << "First number: " << first_number << endl;
    cout << "Fourth number: " << fourth_number << endl;

    // using loops with arrays

    // Printing all elements in the array using a loop
    for (int i = 0; i < 5; i++){
        cout << numbers[i] << endl;
    }

    // Activity: Practice Declaring and Accessing Arrays
    // Task:
    // 1. Create an array called numbers that stores the first five natural numbers
    // 2. Print the second number in the array.

    int natNums[] = {1,2,3,4,5};
    cout << natNums[1] << endl;

    /*
    Practice Problem: Array Element Printer Program
    1. Initialize an array containing the names of five cities.
    2. Use a loop to print each city name on a new line.
    */

    string cities[] = {"Mumbai", "Vizag", "Chennai", "Delhi", "Kolkata"};

    for (int i = 0; i < 5; i++) {
        cout << cities[i] << endl;
    }
 
    return 0;
}