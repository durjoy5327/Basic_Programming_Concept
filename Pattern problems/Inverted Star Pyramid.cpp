/******************************************************************************

*********
 ******* 
  *****  
   ***
    * 
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number : "<<endl;
    cin>> n;
    for(int i=n;i>0;i--){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int j=0;j<i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
