//  Q. Write a function to rotate an array to the left by k positions.

#include <iostream>
using namespace std;

void rotate_array(int arr[],int n,int k){
    int temp=0;
    for(int i=0;i<k;i++){
        temp=arr[0];
        for(int j=0;j<n;j++){
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
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