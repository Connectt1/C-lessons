#include <iostream>
#include <string>
using namespace std;

int main() {
    int numElements;

    // Prompt the user for the number of elements in an array
    cout << "how much elements in massive: ";
    cin >> numElements;

    //Create an array to store the data
    string userData[numElements];

    //Fill the array with data from the user
    for (int i = 0; i < numElements; i++) {
        cout << "enter element " << i + 1 << ": ";
        cin >> userData[i];
    }

    // Output data as a string
    cout << "ur data: ";
    for (int i = 0; i < numElements; i++) {
        cout << userData[i];
        if (i < numElements - 1) {
            cout << ", ";
        }
    }

    return 0;
}