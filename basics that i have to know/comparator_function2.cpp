#include<bits/stdc++.h>
using namespace std;

//it's a comparator function
bool should_i_swap(int a,int b){
    if(a>b) return true;
    else return false;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //sorting in decending way
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(should_i_swap(a[i],a[j])){
                swap(a[i],a[j]);
            }
        }
    }
    cout<<"\nSorted Array :\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}