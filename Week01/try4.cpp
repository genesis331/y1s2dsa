#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3, res;

    cout << "Enter first number? ";
    cin >> num1;
    cout << "Enter second number? ";
    cin >> num2;
    cout << "Enter third number? ";
    cin >> num3;
    res = num1 * num2 * num3;
    cout << num1 << " x " << num2 << " x " << num3 << " = " << res << "\n";

    return 0;
}