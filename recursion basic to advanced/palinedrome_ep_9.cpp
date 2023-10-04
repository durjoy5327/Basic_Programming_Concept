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
bool palinedrome(int n){
     return n==rev(n);
}
int main(){
    cout<<palinedrome(1234321);
    
    return 0;
}