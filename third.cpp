#include <iostream>

using namespace std;

int main() {
    int hour;
    cout << "insert hour amount here";
    cin >> hour;
    if (hour <= 30) {
        cout << "bonus is $50.";
    }
    else if (hour < 70) {
        cout << "bonus is $75.";
    }
    else if (hour < 200) {
        cout << "bonus is $100.";
    }
    else{
        cout << "bonus is $200.";
    }
}