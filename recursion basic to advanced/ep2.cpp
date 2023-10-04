#include<bits/stdc++.h>
using namespace std;
void show(string s,int k){
    if(k==10) return;
    //recursion body 
    cout<<s<<endl;
    //recursive case
    show(s,k+1);
    
}
int main(){
    string s="Durjoy Barua";
    int i=0;
    show(s,i);
    return 0;
}