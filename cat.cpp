#include <iostream>
#include <string>
using namespace std;

int main() {
    string stringText = "String";

    for (char ch : stringText) {
        cout << ch << ",";
    }
    cout << endl;
    return 0;
}
