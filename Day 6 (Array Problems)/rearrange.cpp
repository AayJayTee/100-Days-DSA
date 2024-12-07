// Q. 3. Rearrange an array such that the first element is the largest, the second is the smallest, 
//       the third is the second largest, and so on. Solve this in O(n) time using no extra space.

#include <iostream>
using namespace std;
#include <algorithm>

void rearrange_array(int arr[], int n) {
    int end = n-1;                          // Pointer to track the largest element
    int start = 0;                          // Pointer to track the smallest element
    int maxe = arr[n-1]+1;                  // A number greater than the largest element to use for encoding

    // Traverse the array and encode values
    for (int i=0;i<n;i++) {
        if (i%2==0) {
            // Place the largest element
            arr[i] += (arr[end] % maxe) * maxe;
            end--;
        } else {
            // Place the smallest element
            arr[i] += (arr[start] % maxe) * maxe;
            start++;
        }
    }

    // Decode the array to retrieve final values
    for (int i=0;i<n;i++) {
        arr[i]/= maxe;
    }
    cout<<"The rearranged array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    rearrange_array(arr, n);
    return 0;
}
