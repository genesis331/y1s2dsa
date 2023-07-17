#include <iostream>
using namespace std;
int main() {
    int num, x;

    cout << "Enter a number? ";
    cin >> num;
    x = 0;
    if (num >= 0) {
        do {
            cout << x << " ";
            x++;
        } while (x <= num);
    } else
        cout << "Please provide positive number!";
    cout << "\n";

    return 0;
}