//Q. Create a program to print the first n Fibonacci numbers.

#include <iostream>
using namespace std;

int fibonacci(int n){
    for(int i=0;i<n;i++){
        if(n==0||n==1){
            return n;
        }
        else
            return fibonacci(n-1)+fibonacci(n-2);
        
    }
}

int main()
{   int n;
    cout<<"Enter the number f Fibonacci nos. you want to print: ";
    cin>>n;
    cout << "Fibonacci sequence: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}