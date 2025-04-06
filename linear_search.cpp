

#include <iostream>
using namespace std;

int main() {
    int input[100], count, i, num;

    // Asking user for number of elements
    cout << "Enter number of elements in array: ";
    cin >> count;

    // Taking input elements from the user
    cout << "Enter " << count << " numbers:\n";
    for (i = 0; i < count; i++) {
        cin >> input[i];
    }

    // Asking user for the number to search
    cout << "Enter a number to search in the array: ";
    cin >> num;

    // Linear search
    for (i = 0; i < count; i++) {
        if (input[i] == num) {
            cout << "Element found at index " << i << endl;
            break;
        }
    }

    // If element not found
    if (i == count) {
        cout << "Element not present in the array." << endl;
    }

    return 0;
}

