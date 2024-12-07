#include <iostream>
#include <vector>
using namespace std;

void push(vector<char> &stack, char e) {
    stack.push_back(e);
}

void pop(vector<char> &stack) {
    stack.pop_back();
}

int main() {
    vector<char> stack;
    string str;
    cout << "Enter the parenthesis expression: ";
    cin >> str;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
            push(stack, str[i]);
        } else if (str[i] == ')' || str[i] == '}' || str[i] == ']') {
            // Check if stack is empty or top does not match
            if (stack.empty() || 
                (str[i] == ')' && stack.back() != '(') || 
                (str[i] == '}' && stack.back() != '{') || 
                (str[i] == ']' && stack.back() != '[')) {
                cout << "Expression isn't balanced";
                return 0; // Exit immediately
            }
            pop(stack);
        } else {
            cout << "Invalid expression";
            return 0; // Exit immediately
        }
    }

    // If the stack is empty after processing, it's balanced
    if (stack.empty()) {
        cout << "Expression is balanced";
    } else {
        cout << "Expression isn't balanced";
    }
    return 0;
}
