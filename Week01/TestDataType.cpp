#include <iostream>
using namespace std;
int main() {
    char stuName[20] = "Mat b Mamat";
    char stuGrade;
    short stuAge;
    int totStudent;
    float stuWeight;
    double feePaid;
    bool stuStatus;

    stuGrade = 'A';
    stuAge = 21;
    totStudent = 1200;
    stuWeight = 55.6F;
    feePaid = 5461.75;
    stuStatus = false;

    cout << "Name             : " << stuName << "\n";
    cout << "Grade            : " << stuGrade << "\n";
    cout << "Age              : " << stuAge << "\n";
    cout << "Total Students   : " << totStudent << "\n";
    cout << "Weight (kg)      : " << stuWeight << "\n";
    cout << "Fee Paid         : RM" << feePaid << "\n";
    cout << "Full Time        : " << stuStatus << "\n";
    cout << "\n";

    return 0;
}