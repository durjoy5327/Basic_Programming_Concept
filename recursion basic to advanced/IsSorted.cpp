
#include <bits/stdc++.h>
using namespace std;
bool sorted(int a[],int i,int s){
    if(i== s-1){
        return true;
    }
    return a[i]<a[i+1]&& sorted(a , i+1,s);
}
int main() {
    int arr[] ={1,2,6,8,9};
    int s = sizeof(arr)/sizeof(arr[0]);
    cout<<sorted(arr ,0,s);
    return 0;
}