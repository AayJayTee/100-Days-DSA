// Q. Write a program to find the union and intersection of two arrays.

#include <iostream>
using namespace std;

bool isPresent(int arr[],int n,int a){
    for(int i=0;i<n;i++){
        if(arr[i]==a){
            return true;
        }
    }
    return false;
    
}

void union_array(int arr1[],int n1,int arr2[],int n2){
    int n3=n1+n2;
    int j=0;
    int arr3[n3];
    for(int i=0;i<n1;i++){
        if(!isPresent(arr3,j,arr1[i])){
            arr3[j]=arr1[i];
            j++;
        }
    }
    for(int i=0;i<n2;i++){
        if(!isPresent(arr3,j,arr2[i])){
            arr3[j]=arr2[i];
            j++;
        }
    }
    cout<<"The union of the arrays are: ";
    for(int i=0;i<j;i++){
        cout<<arr3[i];
    }
    
}

void intersection_array(int arr1[],int n1,int arr2[],int n2){
    int n3=n1+n2;
    int arr4[n3];
    int j=0;
    for(int i=0;i<n1;i++){
        if(isPresent(arr2,n2,arr1[i]) && !isPresent(arr4,j,arr1[i])){
            arr4[j]=arr1[i];
            j++;
        }
    }
    cout<<"The intersection of the arrays are: ";
    for(int i=0;i<j;i++){
        cout<<arr4[i];
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
    union_array(arr1,n1,arr2,n2);
    cout<<endl;
    intersection_array(arr1,n1,arr2,n2);
    return 0;
}