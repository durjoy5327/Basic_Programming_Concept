#include <iostream>
using namespace std;
//1342 1 3 4 2
int fun(int n){
    if(n==1) return n;
  return n%10+fun(n/10);
   
}
int main() {
    cout<<fun(1325);

    return 0;
}