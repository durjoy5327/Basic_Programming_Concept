#include<bits/stdc++.h>
using namespace std;
void bubble(int arr[],int r,int c){
    if(r==0) return;
    if(c<r){
       if(arr[c] > arr[c + 1]){
        int temp;
        temp = arr[c];
        arr[c]=arr[c+1];
        arr[c+1]=temp;
       }
        bubble(arr,r,c+1);
    }
    else{
    bubble(arr,r-1,0);
}
}
int main(){
    int ar[5]={2,5,1,6,7};
    int n=5;
    bubble(ar , n,0);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}