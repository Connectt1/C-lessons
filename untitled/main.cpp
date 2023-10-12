// task 3
using namespace std;

#include <iostream>

int main() {
    double a, b;

    cout << "Enter first number";
    cin >> a;

    cout << "enter second num";
    cin >> b;

    if (a + b > 25) {
        cout << "Too much";
    } else
        if (a + b < 0){
            cout << "too less";
        } else
        cout << a + b;


return 0;
}