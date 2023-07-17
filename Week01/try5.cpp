#include <iostream>
#include <string>
using namespace std;
int main() {
    string firstName;
    char lastName[20];

    cout << "Enter your first name? ";
    getline(cin, firstName);
    cout << "Enter your last name? ";
    cin >> lastName;
    cout << "Your name is " << firstName << " " << lastName << "\n";

    return 0;
}