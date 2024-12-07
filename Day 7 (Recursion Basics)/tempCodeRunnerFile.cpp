// Q. Solve the "sum of digits in a number" problem using recursion.

#include <iostream>
using namespace std;

int sum_of_digits(int n,int sum){
    if(n==0){
        return sum;
    }
    sum=sum+n%10;
    n=(n-n%10)/10;
    return sum_of_digits(n,sum);
}

int main()
{   
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum=0;
    cout<<sum_of_digits(n,sum);
    return 0;
}