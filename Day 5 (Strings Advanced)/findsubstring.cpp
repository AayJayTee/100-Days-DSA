// Q. Write a function to find all substrings of a string.

#include <iostream>
using namespace std;

void find_all_substrings(string str){
    for(int i=0;i<str.size();i++){                  //looping through all characters(start index)
        for(int j=i;j<str.size();j++){              //looping through all characters(end index)
            cout<<str.substr(i,j-i+1)<<endl;        //printing substrings from i to j
        }
    }
}

int main()
{   
    string str;
    cout<<"Enter string: ";
    getline(cin,str);   
    find_all_substrings(str);
    return 0;
}