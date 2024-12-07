// Q. Write a recursive function to find the nth Fibonacci number.  


#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n==0||n==1){
        return n;
    }
    else
        return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{   int n;
    cout<<"Enter which number of the sequence you want to find: ";
    cin>>n;
    cout << "Fibonacci at "<<n<<" position: ";
    cout<<fibonacci(n);
    return 0;
}