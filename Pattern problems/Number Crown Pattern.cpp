/******************************************************************************

1          1
12        21
12       321
1234    4321
12345  54321
123456654321

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
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
       for(int j=i;j>0;j--){
            cout<<j;
        }
            cout<<endl;
        
    }
    
    return 0;
}
