// Q. Check if a given string is a palindrome.

#include <iostream>
using namespace std;

void count_vowel_consonant(string str){
    int nofv=0,nofc=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            nofv+=1;
        }
        else
            nofc+=1;
    }
    cout<<"No. of vowels in the string are: "<<nofv<<endl;
    cout<<"No. of consonants in the string are: "<<nofc;
}

int main()
{
    string str;
    cout<<"Enter string: ";
    cin>>str;
    count_vowel_consonant(str);
    return 0;
}