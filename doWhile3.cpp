#include <iostream>
using namespace std;
int main() {
    int num = 20;
    int sum = 0;
    do {
        sum += num;
        num++;
    } while (num <= 25);
    cout << "The sum of numbers from 20 to 25 is: " << sum << endl;
    return 0;
}
