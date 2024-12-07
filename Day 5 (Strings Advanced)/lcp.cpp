// Q. Solve the "longest common prefix" problem for an array of strings.

#include <iostream>
using namespace std;

void common_prefix(string arr[],int n){
    string prefix = arr[0];
    for(int i=1;i<n;i++){                       //loop to iterate through strings in tha array
        for(int j=0;j<prefix.size();j++){       //loop to iterate through characters of prefix and string of the array
            if(prefix[j]!=arr[i][j]){
                prefix=prefix.substr(0,j);      //changing prefix at the point where adjacent strings have different characters
            }
        } 
    }
    cout<<"Longest common prefix is: "<<prefix;

}

int main()
{
    string arr[4]={"interstellar", "internet", "interval", "interact"};
    int n= sizeof(arr)/sizeof(arr[0]);
    common_prefix(arr,n);
    return 0;
}