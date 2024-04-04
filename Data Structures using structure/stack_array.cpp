#include<bits/stdc++.h>
using namespace std;
int stack1[100], n=100,top=-1;
void push1(int val){
    if(top>=n-1){
        cout<<"\nStack Overflow\n";
    }
    else{
        top++;
        stack1[top]=val;
    }
}
void print(){
    if(top == -1){
        cout<<"Stack is empty\n";
    }
    else{
        cout<<"Stack values are:\n";
        for(int i=0; i<=top; i++){
            cout<<stack1[i]<<endl;
        }
    }
}
void pop1(){
    if(top==-1){
        cout<<"\nStack underflow\n";
    }
    else{
        cout<<stack1[top]<<" is deleted\n";
        top--;
    }
}
int main(){
    int t;
    cout<<"1. Enter 1 to push any value\n 2. Enter 2 to delete any value\n 3. Enter 3 to print any value\n 4. Enter 4 to exit\n";
    while(1){
        int n,k;
        cout<<"Enter: ";
        cin>>n;
        if(n==1){
            cout<<"Enter a value to push:\n";
            cin>>k;
            push1(k);
        }
        else if(n==2){
            cout<<"Enter a value to delete:\n";
            cin>>k;
            pop1();
        }
        else if(n==3){
            print();
        }
        else{
            cout<<"Exit";
            break;
        }
    }
    return 0;
}