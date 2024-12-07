#include <iostream>
using namespace std;

void generate_subsequence(string str, string curr, int i) {
    if (i == str.size()) {
        cout << curr << endl;
        return;
    }
    generate_subsequence(str,curr,i+1);               // Exclude the current character and proceed
    generate_subsequence(str,curr+str[i],i+1);         // Include the current character and proceed
}

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    generate_subsequence(str, "", 0);
    return 0;
}
