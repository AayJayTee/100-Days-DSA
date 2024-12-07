#include <iostream>
using namespace std;

void rearrange(int arr[], int n) {
    int posIndex = 0;  // To find the next positive number
    int negIndex = 1;  // To find the next negative number

    while (posIndex < n && negIndex < n) {
        // Find the next positive number at posIndex
        while (posIndex < n && arr[posIndex] <= 0) {
            posIndex += 2; // Move to the next potential position for a positive number
        }

        // Find the next negative number at negIndex
        while (negIndex < n && arr[negIndex] >= 0) {
            negIndex += 2; // Move to the next potential position for a negative number
        }

        // If both are within bounds and we found positive and negative numbers to swap
        if (posIndex < n && negIndex < n) {
            // Swap the positive and negative numbers
            swap(arr[posIndex], arr[negIndex]);
        }
    }

    // Output the rearranged array
    cout << "Rearranged array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter length of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    rearrange(arr, n);
    return 0;
}
