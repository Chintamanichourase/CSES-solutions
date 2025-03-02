/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    
    while(n!=1){
        if(n%2==1){
            cout<<n<<" ";
            n=3*n+1;
        }
        else {
            cout<<n<<" ";
            n=n/2;
        }
    }
    cout<<n;
    return 0;
}