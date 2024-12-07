// Q. Implement a program to replace spaces in a string with a special character (e.g., %20).

#include <iostream>
using namespace std;

void replace_space(string str,string a){
    for(int i=0;i<str.size();i++){                      // Iterating through the string
        if (str[i]==' '){                               // Condition to chek spaces
            str.replace(i,1,a);                         // Replacing spaces with special character
        }
    }
    cout<<"String after replacing spaces is: "<<str;
}

int main()
{   
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    string a;
    cout<<"Enter replacing character: ";
    getline(cin,a);
    replace_space(str,a);
    return 0;
}