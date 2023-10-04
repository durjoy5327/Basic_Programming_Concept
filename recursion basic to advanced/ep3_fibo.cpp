#include<bits/stdc++.h>
using namespace std;

// fibonacci : 1 1 2 3 5 8 13 21 34 55 
int show(int n){
    //base condition
   if(n<2) return n;
   //recursive base
   return show(n-1)+show(n-2);
}
int main(){
    int n;
    n=50;
     cout<<show(n)<<" ";
    return 0;
}