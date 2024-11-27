#include <iostream>
#include <string>
using namespace std;

int main() {
    string correctPassword = "mypassword"; // Replace with the correct password
    string inputPassword;
    int attempts = 0; // Counter for wrong attempts

    while (attempts < 3) { // Allow up to 3 attempts
        cout << "Enter password: ";
        cin >> inputPassword;

        if (inputPassword == correctPassword) {
            cout << "Access granted!" << endl;
            return 0; // Exit the program if password is correct
        } else {
            attempts++; // Increment the wrong attempt counter
            cout << "Incorrect password. Attempts left: " << (3 - attempts) << endl;
        }
    }

    // If the loop exits, it means the password was wrong 3 times
    cout << "Password blocked. Please contact support." << endl;

    return 0;
}
