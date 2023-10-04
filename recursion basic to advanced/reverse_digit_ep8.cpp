/*
#include <iostream>
using namespace std;
int sum=0;
//1325 =5231
void fun(int n){
    if(n==0) return ;
  
  sum=sum*10+n%10;
   fun(n/10);
}
int main() {
    fun(1325);
    cout<<sum;
    return 0;
}
*/

// 2nd way

#include <bits/stdc++.h>
using namespace std;
int helper(int n,int digit);
int rev(int n){
    /* sometime we needs some additional argument
    in that case we can create helper function
    */
    int digit =(int)(log10(n))+1;
    return helper(n ,digit);
    
}
int helper(int n,int digit){
    if(n%10==n) return n;
    int temp= n%10;
    return temp*(int)(pow(10,digit-1))+helper(n/10,digit-1);
    
}
int main(){
    cout<<rev(1235);
    
    return 0;
}