#include <iostream>
using namespace std;
int main() {
    int num, x;

    cout << "Enter a number? ";
    cin >> num;
    x = 0;
    if (num >= 0) {
        while (x <= num) {
            cout << x << " ";
            x++;
        }
    } else
        cout << "Please provide positive number!";
    cout << "\n";

    return 0;
}