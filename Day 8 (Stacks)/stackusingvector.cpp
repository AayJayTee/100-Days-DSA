// Q. Implement a stack that supports push, pop, and finding the minimum element in O(1) time.

#include <iostream>
using namespace std;
#include <vector>

void push(vector <int> &stack,int e,vector<int> &aux){
    if( aux.empty() || e<=aux.back()){
        aux.push_back(e);
    }
    stack.push_back(e);
}

void pop(vector <int> &stack, vector<int> &aux){
    if (stack.empty()) {
        cout << "Stack is empty. Cannot pop." << endl;
        return;
    }
    int end1=stack.size()-1;
    int end2=aux.size()-1;
    cout<<stack[end1];
    if(stack[end1]==aux[end2]){
        aux.pop_back();
    }
    stack.pop_back();
}

void find_min_element(vector <int> &aux){
    int end=aux.size()-1;
    cout<<"Minimum element is: "<<aux[end];
}

void display_stack(vector <int> &stack){
    cout<<"Structure of stack is: ";
    for(int i=0;i<stack.size();i++){
        cout<<stack[i]<<" ";
    }
}

int main()
{
    vector <int>stack;
    vector <int>aux;
    push(stack,2,aux);
    push(stack,10,aux);
    push(stack,9,aux);
    push(stack,1,aux);
    push(stack,3,aux);
    display_stack(stack);
    cout<<endl;
    pop(stack,aux);
    cout<<endl;
    display_stack(stack);
    cout<<endl;
    find_min_element(aux);
    return 0;
}