#include<bits/stdc++.h>
using namespace std;
//10 9 8 7 6 5 4 3 2 1
void print(int n){
    //Base case
    if(n<1) return;
    //Body of the recursion 
    cout<<n <<" ";
    //recursive case 
    //This is the tail recursion
    //this is the last function call
    print(n-1);
}
//1 2 3 4 5 6 7 8 9 10
void show(int k){
    if(k==0) return;
    show(k-1);
    cout<<k<<" ";
}
int main(){
    print(10);
    cout<<endl;
    show(10);
    return 0;
}