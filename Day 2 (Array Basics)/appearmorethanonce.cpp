#include <iostream>
using namespace std;

void appear_more_than_once(int arr[], int n) {
    cout << "The elements that appear more than once are: ";
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        // Check if the element has already been printed
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                isDuplicate = true;
                break;
            }
        }
        if (isDuplicate) continue;

        // Count occurrences of the current element
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Print the element if it appears more than once
        if (count > 1) {
            cout << arr[i] << " ";
        }
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
    appear_more_than_once(arr, n);
    return 0;
}
