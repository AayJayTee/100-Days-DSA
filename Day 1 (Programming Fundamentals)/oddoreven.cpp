//Q. Write a program to check if a number is even or odd.

#include <iostream>
using namespace std;

void odd_even(int n){
    if (n%2==0){
    cout<<"The number is even";
    }
else
    cout<<"The number is odd";
    
}

int main(){
int n;
cout<<"Enter a number: ";
cin>>n;
odd_even(n);

return 0;
}