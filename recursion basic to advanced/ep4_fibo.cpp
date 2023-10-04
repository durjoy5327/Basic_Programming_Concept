#include<bits/stdc++.h>
using namespace std;

// fibonacci :0 1 1 2 3 5 8 13 21 34 55 
int show(int n){
    //base condition
   if(n<2) return n;
   //recursive base
   //Note that this is not tail recursion 
   //cause this not the last function call its just returning the value
   return show(n-1)+show(n-2);
}
int main(){
    int n;
    n=50;
    
   for(int i=0;i<n;i++){
     cout<<show(i)<<" ";
   }
    return 0;
}