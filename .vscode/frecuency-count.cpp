#include <iostream>
using namespace std;

void countFreq(int arr[], int n) {
    // Create a boolean array to mark visited elements
    bool visited[100] = {false};

    // Go through each element
    for (int i = 0; i < n; i++) {
        // If already counted, skip
        if (visited[i])
            continue;

        int count = 1;

        // Count how many times arr[i] appears
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true; // Mark as counted
                count++;
            }
        }

        // Print the number and how many times it appeared
        cout << arr[i] << " appears " << count << " times" << endl;
    }
}

int main() {
    int arr[] = {10, 20, 20, 10, 10, 20, 5, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    countFreq(arr, n);

    return 0;
}
