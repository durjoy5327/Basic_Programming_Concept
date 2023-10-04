#include <iostream>
using namespace std;
//5 4 3 2 1
int fun(int n){
    if(n<2) return 1;
    return n*fun(n-1);
   
}
int main() {
    cout<<fun(5);

    return 0;
}