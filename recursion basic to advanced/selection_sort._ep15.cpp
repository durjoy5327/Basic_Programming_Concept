#include<bits/stdc++.h>
using namespace std;
void selection(int arr[],int r,int c,int max){
    if(r==0) return;
    if(c<r){
        if(arr[c]>arr[max]){
            selection(arr,r,c+1,c);
        }
        else{
            selection(arr,r,c+1,max);
        }
    }
    else{
        int temp=arr[max];
        arr[max]=arr[r-1];
        arr[r-1]=temp;
        selection(arr,r-1,0,0);
    }

}
int main(){
    int arr[]={2,9,5,3,6,4};
    int r=6;
    int c=0;
    int max=0;
    selection(arr,r,c,max);
    for(int i=0;i<r;i++){
        cout<<arr[i]<<" ";
    }

    return 0; 
}