// Q. Given an array containing n-1 distinct integers in the range of 1 to n, write a program to
//    find the missing number in O(n) time using a mathematical formula or XOR.

#include <iostream>
using namespace std;

void find_missing_no(int arr[],int n){
    int sumofn=(n+1)*(n+2)/2;                           //calculating sum of the range n natural nos
    int sumofarray=0;                                   
    for(int i=0;i<n;i++){                               //calculating the sum of the elements of the array
        sumofarray+=arr[i];
    }
    cout<<"The missing no is: "<<sumofn-sumofarray;     //subtracting both sums to obtain the missing no.
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
    find_missing_no(arr,n);
    return 0;
}