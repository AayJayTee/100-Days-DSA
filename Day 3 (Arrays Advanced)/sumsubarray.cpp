// Q. Solve the problem of finding a subarray with a given sum (for positive numbers).

#include <iostream>
using namespace std;

int sum_subarray(int arr[],int n,int sum){
    int i=0;
    int temp=0;
    int start=0;
    while(i<n){
        for(int j=i;j<n;j++){
            temp+=arr[j];
            if(temp>sum){
                i++;
                temp=0;
                break;
            }
            else if(temp==sum){
                start=i;
                cout<<"The subarray giving sum is: ";
                for(int k=start;k<=j;k++){
                    cout<<arr[k];
                }
                cout<<endl;
            }
        }
    }
}

int main()
{
    int n,sum;
    cout << "Enter length of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"Enter the sum: ";
    cin>>sum;
    sum_subarray(arr,n,sum);
    return 0;
}