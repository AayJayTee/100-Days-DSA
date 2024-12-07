#include <iostream>
using namespace std;

void check_anagram(string str1, string str2){
    int n1 = str1.size(), n2 = str2.size();
    int freq1[26] = {0}, freq2[26] = {0}; // Frequency arrays for both strings
    
    if (n1 != n2) {  // Check if lengths are the same
        cout << "Strings cannot be anagrams due to diff. sizes";  
    }
    else {
        for (int i = 0; i < n1; i++) {    
            freq1[str1[i] - 'a']++;  // Update frequency for first string
            freq2[str2[i] - 'a']++;  // Update frequency for second string
        }
        for (int k = 0; k < 26; k++) {
            if (freq1[k] != freq2[k]) {   // Compare frequencies of characters
                cout << "They are not anagrams";   
                return;
            }
        }
    }
    cout << "They are anagrams";  // Output if they are anagrams
}

int main()
{   
    string str1, str2;
    cout << "Enter first string: ";    
    getline(cin, str1);   
    cout << "Enter second string: ";   
    getline(cin, str2);   
    check_anagram(str1, str2);  
    return 0;
}
