// Q. Write a program to reverse a string.

#include <iostream>
using namespace std;

void reverseString(string str){
    string rev(str.size(),' ');
    int j=0;
    for(int i=str.size()-1;i>=0;i--){
        rev[j]=str[i];
        j++;
    }
    cout<<"Reversed string is: "<<rev;
}

int main()
{  
    string str;
    cout<<"Enter string: ";
    cin>>str;
    reverseString(str);
    return 0;
}