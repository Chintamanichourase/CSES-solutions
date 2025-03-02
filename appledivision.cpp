/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void applediv(ll a,ll b,vector<ll> &v,ll &ans,int i,int n){
    if(i==n){
        ans=min(ans,abs(a-b));
        return;
    }
    applediv(a+v[i],b,v,ans,i+1,n);
    applediv(a,b+v[i],v,ans,i+1,n);
}
int main()
{
    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=LONG_LONG_MAX;
    applediv(0,0,v,ans,0,n);
    cout<<ans<<endl;
    return 0;
}