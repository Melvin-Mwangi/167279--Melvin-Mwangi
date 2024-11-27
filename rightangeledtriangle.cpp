#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float base, height, hypotenuse, area, perimeter;
    cout << "Enter the length of the base: ";
    cin >> base;
    cout << "Enter the length of the height: ";
    cin >> height;
    cout<< "Enter the length of the hypotenuse: ";
    cin>>hypotenuse;
    area = 0.5 * base * height;
    perimeter = base + height + hypotenuse;
    cout << "Area of the triangle: " << area << endl;
    cout << "Perimeter of the triangle: " << perimeter << endl;

    return 0;
}
