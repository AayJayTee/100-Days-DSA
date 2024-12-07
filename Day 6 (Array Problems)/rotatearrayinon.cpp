#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end){    // Function to reverse the array from start to end indices
    while(start<end){
        swap(arr[start],arr[end]);              // Swap elements at the start and end indices
        start++;    
        end--;      
    }
}

void rotate_array(int arr[],int n,int k){    // Function to rotate array elements by k positions
    if(k>n){                                 // If k is greater than the array length, take the modulo
        k=k%n;
    }
    reverse(arr,n-k,n-1);                   // Reverse the last k elements
    reverse(arr,0,n-k-1);                   // Reverse the first n-k elements
    reverse(arr,0,n-1);                     // Reverse the whole array to get the final rotated array
    
    cout<<"The shifted array is: ";
    for(int i=0;i<n;i++){ 
        cout<<arr[i];
    }
}

int main()
{   
    int n,k;
    cout<<"Enter length of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }  
    cout<<"Enter how many positions you want to shift it by?: ";
    cin>>k;
    rotate_array(arr,n,k);
    return 0;
}
