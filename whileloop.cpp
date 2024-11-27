#include <iostream>
using namespace std;

int main() {
    string food;
    char resp;

    // Initial food input
    cout << "Please enter a food you like: ";
    cin >> food;
    cout << "Do you wish to continue (Y/N)? ";
    cin >> resp;

    // Loop until the user enters 'N' or 'n'
    while (resp != 'N' && resp != 'n') {
        cout << "Please enter a food you like: ";
        cin >> food;
        cout << "Do you wish to continue (Y/N)? ";
        cin >> resp;
    }

    return 0;
}