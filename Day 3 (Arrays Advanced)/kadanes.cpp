// Q. Implement Kadane's Algorithm to find the maximum sum subarray.

#include <iostream>
using namespace std;

void max_sum_subarray(int arr[],int n){
    int max_sum=0;
    int current=0;
    int start=0,end=0,temp_start=0;
    for(int i=0;i<n;i++){
        current+=arr[i];
        max_sum=max(max_sum,current);
        start=temp_start;
        end=i;
        if (current<0){
            current=0;
            temp_start=i+1;
        }
    }

    cout<<"Max sum is: "<<max_sum<<endl;
    cout<<"The elements giving max sum are: ";
    for (int j = start; j <= end; j++) {
        cout << arr[j]<<",";
    }

}

int main()
{   
    int n;
    cout << "Enter length of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    max_sum_subarray(arr,n);
    return 0;
}