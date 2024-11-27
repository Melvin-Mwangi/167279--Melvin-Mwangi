#include <iostream>
using namespace std;

int main() {
    int num = 12; // Starting number

    do {
        cout << num << " "; // Output the current number
        num += 2;           // Increment by 2 to get the next even number
    } while (num <= 50);    // Continue while num is less than or equal to 50

    cout << endl; // End with a new line
    return 0;
}
