// Q. Implement a program to remove duplicate characters from a string.

#include <iostream>
using namespace std;

void remove_duplicate(string str){
    string newstr="";
    for(int i=0;i<str.size();i++){
        bool flag=false;
        for(int j=0;j<newstr.size();j++){
            if(str[i]==newstr[j]){
                flag=true;
                break;
            }
        }
        if(flag==false){
            newstr+=str[i];
            }
    }
    cout<<"String after removal of duplicates is: "<<newstr;
}

int main()
{  
    string str;
    cout<<"Enter string: ";
    cin>>str;
    remove_duplicate(str);
    return 0;
}