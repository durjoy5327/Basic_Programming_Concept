#include <bits/stdc++.h>
using namespace std;

int helper(int n,int count){
    if(n==0) return count;
    return helper(n/10,count+1);
}

int main(){
   
    cout<<helper(30120350,0);
    return 0;
}