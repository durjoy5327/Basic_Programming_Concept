/******************************************************************************

1
01
101
0101
10101

*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number : "<<endl;
    cin>> n;
    int count=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            count =0;
         }
           else count=1;
        
        for(int j=1;j<=i;j++){
            cout<<count;
            count= 1-count;
            }
            cout<<endl;
        
    }
    
    return 0;
}
