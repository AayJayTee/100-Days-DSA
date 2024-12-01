// Q. Check if a given string is a palindrome.

#include <iostream>
using namespace std;

bool isPalindrome(string str){
    int i=0,j=str.size()-1;
    bool flag=true;
    while(i!=j && i<str.size() && j>=0){
        if(str[i]!=str[j]){
            flag=false;
        }
        i++,j--;
    }
    return flag;

}

int main()
{
    string str;
    cout<<"Enter string: ";
    cin>>str;
    if(isPalindrome(str)){
        cout<<"String is a palindrome";
    }
    else
        cout<<"String is not a palindrome";
    return 0;
}