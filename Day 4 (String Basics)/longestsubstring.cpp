//Q. Solve the "longest word in a string" problem.

#include <iostream>
using namespace std;
#include <sstream>

void longestword(string str,int n){
    stringstream ss(str);  // Create a stringstream from the input string
    string word;
    string longestWord = "";  // Variable to keep track of the longest word

    // Process each word from the stringstream
    while (ss >> word) {
        if (word.size() > longestWord.size()) {
            longestWord = word;  // Update the longest word if the current word is longer
        }
    }
    cout<<"The longest word is: "<<longestWord;
}

int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    longestword(str,str.size());
    return 0;
}