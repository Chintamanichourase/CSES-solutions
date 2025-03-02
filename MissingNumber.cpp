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
    double n;
    cin>>n;
    ll ans=0;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        ans+=v[i];
    }
    ll t=ceil((n/2)*(n+1));
    ans=t-ans;
    cout<<ans<<endl;
    return 0;
}