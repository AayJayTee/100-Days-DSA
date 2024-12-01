// Q. Implement a program to find the second largest element in an array.

#include <iostream>
using namespace std;

void secondlargest(int arr[],int n){
    int secmax=arr[0];
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            secmax=max;
            max=arr[i];
        }
        else if(secmax<arr[i] && arr[i]!=max){
            secmax=arr[i];
        }
    }
    cout<<"The second largest element is: "<<secmax;
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
    secondlargest(arr,n);
    return 0;
}