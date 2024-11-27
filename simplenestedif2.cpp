#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter the child's age: ";
    cin >> age;
    
    if (age >= 1 && age <= 2) {
        cout << "Admit to Playgroup" << endl;
    }
    else if (age >= 3 && age <= 4) {
        cout << "Admit to Preschool" << endl;
    }
    else if (age >= 5 && age <= 6) {
        cout << "Admit to Kindergarten" << endl;
    }
    else if (age > 6) {
        cout << "Admit to Grade School" << endl;
    }
    else if (age < 1) {
        cout << "Reject" << endl;
    }
    else {
        cout << "Invalid age input" << endl;
    }

    return 0;
}
