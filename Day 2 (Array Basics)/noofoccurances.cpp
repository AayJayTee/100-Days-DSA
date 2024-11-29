// Q. Create a program to count the number of occurrences of a given element in an array.

#include <iostream>
using namespace std;

void no_of_occurance(int arr[],int n, int a){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==a){
            count+=1;
        }
    }
    cout<<a<<" occurs "<<count<<" times in the array";
}

int main()
{
    int n,a;
    cout<<"Enter length of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }  
    cout<<"Enter the element: ";
    cin>>a;
    no_of_occurance(arr,n,a);
    return 0;
}