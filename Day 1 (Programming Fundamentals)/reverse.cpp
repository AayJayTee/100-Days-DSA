//Q. Implement a program to reverse a number (e.g., input: 123, output: 321).

#include <iostream>
using namespace std;

void reverseno(int n){
    int a=0;
    while(n>0){  
    int lastdigit= n%10;
    a = a*10+lastdigit;
    n = n/10;
    }
    cout<<"Reversed number: "<<a;
}

int main()
{   
    int n;
    cout<<"Enter number: ";
    cin>>n;
    reverseno(n);
    return 0;
}