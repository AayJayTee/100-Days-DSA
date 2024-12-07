// Q. Solve the problem of finding the first non-repeating character in a string.

#include <iostream>
using namespace std;
#include <cctype>

void first_non_repeating(string str){
    for(int i=0;i<str.size();i++){                                  //looping through each character in string
        int count=0;                                                //count to maintain frequency of each character
        for(int j=0;j<str.size();j++){                              //looping in order to compare the characters
            if(tolower(str[i])==tolower(str[j])){                   //comparsion after conversion to lowercase
                count+=1;
            }
        }
        if(count==1){                                               //character having frequency of 1
            cout<<"First non repeating character is: "<<str[i];
            break;                                                  //breaking the loop in order to obtain only first non repeating character
        }
    }
}

int main()
{   
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    first_non_repeating(str);
    return 0;
}