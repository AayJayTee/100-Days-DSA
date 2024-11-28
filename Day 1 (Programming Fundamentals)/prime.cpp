//Q. Write a program to check if a given number is prime.

#include <iostream>
using namespace std;

bool isPrime(int n){
    int j=0;
    if(n==1){
        return false;
        }
    else if(n>1){
    for(int i=2;i<n;i++){
        if(n%i==0){
        return false;
            }
        }
    return true;
    }
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if (isPrime(n)){
        cout<<"Number is prime";
    }
    else
        cout<<"Number is not prime";
    return 0;
}