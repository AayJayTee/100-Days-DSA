// Q. Write a recursive function to calculate the factorial of a number.

#include <iostream>
using namespace std;

int factorial(int n){;
    if(n<=0){                       
        return 1;
    }
    else
        return n*factorial(n-1);                    
}

int main()
{
    int n;
    cout<<"Enter no to print factorial of: ";
    cin>>n;
    cout<<factorial(n);
    return 0;
}