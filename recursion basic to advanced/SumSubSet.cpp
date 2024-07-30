#include<bits/stdc++.h>
using namespace std;
bool SumSubSet(vector<int>& vec , int size, int target){
        if(target==0) return true;
        if(size<=0) return false;
        if(vec[size-1]>target){
            return SumSubSet(vec, size-1, target);
        }
        return SumSubSet(vec, size-1, target)|| SumSubSet(vec, size-1, target- vec[size-1]);
}

int main(){
    vector<int>vec={3,34,5,4};
    int size= vec.size();
    cout<<"Enter target value: \n";
    int target;
    cin>>target;
    bool ans= SumSubSet(vec, size, target);
    if(ans) cout<<"Sum of sub Set is present\n";
    else cout<<"Sum of sub set is not present in given vector\n";
    return 0;
}