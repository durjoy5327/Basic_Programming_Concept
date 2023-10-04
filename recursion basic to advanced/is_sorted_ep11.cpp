#include<bits/stdc++.h>
using namespace std;

bool issorted(int arr[] ,int index){
    if(index==10) return true;


    return arr[index]<arr[index+1] && issorted(arr,index+1);
}
int main(){
    int a[10]={2,3,4,5,8,9,12,15,16,19};
    cout<<issorted(a,0);


    return 0;
}