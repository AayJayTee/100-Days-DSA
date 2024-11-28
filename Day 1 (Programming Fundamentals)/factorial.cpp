//Q. Write a program to find the factorial of a number using a loop.

#include <iostream>
using namespace std;

void factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"Factorial is: "<<fact;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    factorial(n);
return 0;
}