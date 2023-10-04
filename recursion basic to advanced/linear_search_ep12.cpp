#include<bits/stdc++.h>
using namespace std;
int linear_search(int arr[],int t,int index){
    if(index==10) return -1;
    if(arr[index]==t) return index;
   return linear_search(arr,t,index+1);

}
bool find(int arr[],int t,int index){
    if(index==10) return false;
    return arr[index]==t|| find(arr,t,index+1);

}

int main(){
    int arr[10]= {2,6,4,5,8,1,4,15,17,18};
    int target=15;
    int k= find(arr,target,0);
    if(k) cout<<"True\n";
    else cout<<"False\n";
    cout<<"index ="<<linear_search(arr,target,0);


}