#include <iostream>
using namespace std;
int main() {
    int num;

    cout << "Enter a number? ";
    cin >> num;
    if (num >= 0) {
        for (int x = 0; x <= num; x++)
            cout << x << " ";
    } else
        cout << "Please provide positive number!";
    cout << "\n";

    return 0;
}