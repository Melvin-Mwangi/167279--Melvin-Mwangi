#include <iostream>
using namespace std;

int main() {
	int age;
	cout << "Please enter the age: ";
	cin >> age;

	if (age >= 4) {
		cout << "Admitted! Proceed to registration" << endl;
	}
	else {
		cout << "Declined! Minimum age not reached" << endl;
	}
	//using terary operator
	cout << "Using ternary operator" << endl;
	string message = (age >= 4) ? "Admit to school." : "Declined! Minimun age not reached.";
		cout << message << endl;
	return 0;
}