#include <iostream>
using namespace std;

void max_sum_subarray(int arr[], int n) {
    int max_sum = arr[0]; 
    int current = arr[0]; 
    int start = 0, end = 0; 
    int temp_start = 0;      

    for (int i = 1; i < n; i++) {  
        if (current + arr[i] < arr[i]) {            // Check if adding the current element reduces the sum.
            current = arr[i];                       // Start a new subarray.
            temp_start = i;                          // Update the temporary starting index.
        } else {
            current += arr[i];                      // Otherwise, add the element to the current subarray sum.
        }

        // Update max_sum and the start/end indices if the current sum is greater than max_sum.
        if (current > max_sum) {
            max_sum = current;
            start = temp_start;
            end = i;
        }
    }

    cout << "Max sum is: " << max_sum << endl;
    cout << "The elements giving max sum are: ";
    for (int j = start; j <= end; j++) {    
        cout << arr[j] << " ";
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
    max_sum_subarray(arr, n);
    return 0;
}
