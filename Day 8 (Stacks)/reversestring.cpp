    // Q.  Write a program to reverse a string using a stack.

#include <iostream>
using namespace std;
#include <vector>

void push(vector <char> &stack,char e){
    stack.push_back(e);
}

void pop(vector <char> &stack){
    if (stack.empty()) {
        cout << "Stack is empty. Cannot pop." << endl;
        return;
    }
    cout<<stack.back();
    stack.pop_back();
}

int main()
{
    vector <char>stack;
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    for(int i=0;i<str.size();i++){
        push(stack,str[i]);
    }
    cout<<"The reversed string is: ";
    while (!stack.empty()) {
    pop(stack);
    }
    return 0;
    }