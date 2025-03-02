#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    vector<int> a;
    vector<int> b;
    __int128_t sum = n*(n+1)/2;
    if(sum%2==1){
        cout<<"NO";
    }
    else{
        long long temp=(long long)sum/2;
        while(n){
            if(temp-n>=0){
                a.push_back(n);
                temp=temp-n;
            }else{
                b.push_back(n);
            }
            n--;
        }
        cout<<"YES"<<endl;
        cout<<a.size()<<endl;
        for(int i:a) cout<<i<<" ";
        cout<<endl;
        cout<<b.size()<<endl;
        for(int i:b) cout<<i<<" ";
    }
    return 0;
}