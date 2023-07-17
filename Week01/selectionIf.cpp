#include <iostream>
using namespace std;
int main() {
    int a;

    cout << "Enter a number? ";
    cin >> a;

    if (a == 1)
        cout << "ONE";
    else if (a == 2)
        cout << "TWO";
    else if (a == 3)
        cout << "THREE";
    else if (a == 4)
        cout << "FOUR";
    else if (a == 5)
        cout << "FIVE";
    else
        cout << "UNKNOWN!";
    cout << "\n";

    return 0;
}