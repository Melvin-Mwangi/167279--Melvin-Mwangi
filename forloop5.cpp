#include <iostream>
using namespace std;

int main() {
    int nums[5];

    // Input using a regular for loop (since for-each cannot directly take input)
    cout << "Please enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> nums[i];
    }

    // Output using a for-each loop
    cout << "The 5 integers you entered are:" << endl;
    for (int num : nums) {
        cout << num << endl;
    }

    return 0;
}
