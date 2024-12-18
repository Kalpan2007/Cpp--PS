#include <iostream>
using namespace std;

string check(double side1, double side2, double side3) {
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        if (side1 == side2 && side2 == side3) {
            return "Equilateral Triangle";
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3) {
            return "Isosceles Triangle";
        }
        else {
            return "Scalene Triangle";
        }
    } else {
        return "Not a valid triangle";
    }
}

int main() {
    double a, b, c;

    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;

    string result = check(a, b, c);
    cout << "The triangle is: " << result << endl;

    return 0;
}
