#include<bits/stdc++.h>
using namespace std;
void triangle1(int r, int c){
    if(r==0) return;
    if(c<r){
        triangle1(r,c+1);
        cout<<"*";
    }
    else{
    triangle1(r-1,0);
    cout<<endl;
}
    }
void triangle2(int r, int c){
    if(r==0) return;
    if(c<r){
        cout<<"*";
        triangle2(r,c+1);
    }
    else{
         cout<<endl;
    triangle2(r-1,0);
}
    }
int main(){
    int r=4,c=0;
     triangle1(r,c);
     cout<<endl;
    triangle2(r,c);

    return 0;
}