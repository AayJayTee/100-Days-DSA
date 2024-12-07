#include <iostream>
using namespace std;

void count_frequency(int arr[], int n) {
    // Iterate through the array and use element values as indices
    for (int i = 0; i < n; i++) {
        int index = arr[i] % (n + 1) - 1; // Map the value to an index
        arr[index] += (n + 1);            // Increment the value at the mapped index
    }

    // Display the frequency of each element
    cout << "Element frequencies:" << endl;
    for (int i = 0; i < n; i++) {
        int freq = arr[i] / (n + 1); // Retrieve frequency
        if (freq > 0) {
            cout << (i + 1) << " appears " << freq << " times" << endl;
        }
        arr[i] %= (n + 1); // Restore the original values
    }
}

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements (positive integers): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    count_frequency(arr, n);

    return 0;
}
