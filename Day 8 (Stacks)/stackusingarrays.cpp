// Q. Implement a stack using arrays.

#include <iostream>
using namespace std;

int push(int stack[],int &top,int e,int n){
    if(top==n){
        cout<<"Stack Overflow has occured, no more elements can be added"<<endl;
    }
    
    else{
        stack[top]=e;
        top++;
    }
    return top;
}

int pop(int stack[],int &top,int n){
    if(top==-1){
        cout<<"Stack Underflow has occured, no more elements left to remove"<<endl;
    }
    else{
        cout<<stack[top-1]<<endl;
        top--;
    }
    return top;
}

void display_stack(int stack[],int top){
    cout<<"The structure of the stack is: ";
    for(int i=0;i<top;i++){
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}

int main()
{   
    int n,k;
    int top=0;
    cout<<"Limit the amount of elements(enter max no. of elements): ";
    cin>>n;
    int stack[n];
    push(stack,top,5,n);
    push(stack,top,4,n);
    push(stack,top,6,n);
    display_stack(stack,top);
    push(stack,top,7,n);
    push(stack,top,8,n);
    display_stack(stack,top);
    pop(stack,top,n);
    display_stack(stack,top);
    return 0;
}