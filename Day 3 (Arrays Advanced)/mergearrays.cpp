// Q. Implement a function to merge two sorted arrays.

#include <iostream>
using namespace std;

void mergearrays(int arr1[],int len1,int arr2[],int len2,int merged[],int len3){
    for(int i=0;i<len1;i++){
        merged[i]=arr1[i];
        }
    for(int i=0;i<len2;i++){
        merged[len1+i]=arr2[i];
        }
    cout<<"The merged array is: ";
    for(int i=0;i<len3;i++){
        cout<<merged[i];
    }
}

int main()
{   
    int n1,n2,n3;
    cout<<"Enter length of first array: ";
    cin>>n1;
    int arr1[n1];
    cout<<"Enter elements of the array: ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter length of second array: ";
    cin>>n2;
    int arr2[n2];
    cout<<"Enter elements of the array: ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    n3=n1+n2;
    int merged[n3];
    mergearrays(arr1,n1,arr2,n2,merged,n3);
    return 0;
}