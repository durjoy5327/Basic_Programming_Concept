#include<bits/stdc++.h>
using namespace std;

//it's a comparator function
// second value of pair value will be print decreasingly 
bool should_i_swap(pair<int,int>a, pair<int,int>b){
    if(a.first!=b.first){
        if(a.first>b.first){
            return 1;
        }
        else return 0;
    }
    else{
        if(a.second<b.second) return 1;
        else return 0;
    }
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
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
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }


    return 0;
}