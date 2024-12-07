// Q. Solve the Tower of Hanoi problem for 3 disks. 
#include <iostream>
using namespace std;

void Tower_of_Hanoi(int n,int A, int B, int C){
    if(n>0){
        Tower_of_Hanoi(n-1,A,C,B);
        cout<<"Move a disk from "<<A<<" to "<<C<<endl;
        Tower_of_Hanoi(n-1,B,A,C);
    }
}

int main()
{   int n=3;
    Tower_of_Hanoi(n,1,2,3);
    return 0;
}
