#include<bits/stdc++.h>
using namespace std;

int binarysearch(int a[],int x,int l,int r){
   int mid=(r+l)/2;
    if(l>r) return -1;
    if(a[mid]==x) return mid;
    else if(a[mid]<x)  return binarysearch(a,x,mid+1,r);
    else  return binarysearch(a,x,l,mid-1);


}
int main(){
    int arr[]={4,6,9,11,14,17,19,25,26,27,30,33,37,39,40};
    int l=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    int r=n-1;
    int mid=(l+r)/2;
    int x;
     cin>>x;
    int ans=binarysearch(arr,x,l,r);
    (ans==-1)
    ? cout<<"Not Found"
    : cout<<"Index = "<<ans;
    return 0;
}