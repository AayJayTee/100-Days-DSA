// Q. Write a program to find the largest and smallest elements in an array.

#include <iostream>
using namespace std;

void largest_smallest_in_array(int arr[],int n){
    int max=arr[0],min=arr[0];
    
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        if(min>arr[i]){
            min=arr[i];
        }
        }
    }

    cout<<"The largest element is: "<<max<<endl;
    cout<<"The smallest element is: "<<min;
}

int main()
{
    int n;
    cout<<"Enter length of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    largest_smallest_in_array(arr,n);
    return 0;
}