#include <iostream>
using namespace std;

int main() {
    int num = 20;  // Starting number
    int sum = 0;   // Variable to store the sum

    while (num <= 25) {
        sum = sum + num; // Add the current number to the sum
        num++;           // Increment the number
    }

    // Output the result
    cout << "The sum of whole numbers from 20 to 25 is: " << sum << endl;

    return 0;
}
