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
    string a;
    cin>>a;
    ll ans=LONG_LONG_MIN;
    ll temp=1;
    for(int i=0;i<a.size()-1;i++){
        if(a[i]==a[i+1]){
            temp++;
        }
        else{
            ans=max(ans,temp);
            temp=1;
        }
    }
    ans=max(ans,temp);
    cout<<ans<<endl;
    return 0;
}