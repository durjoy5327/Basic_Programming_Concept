
#include <iostream>
using namespace std;
//1342 1 3 4 2 =1*3*4*2
int fun(int n){
    if(n%10==n) return n;
  return n%10*fun(n/10);
   
}
int main() {
    cout<<fun(1342);

    return 0;
}