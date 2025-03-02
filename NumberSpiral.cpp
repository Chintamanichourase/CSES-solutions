/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        long long a,b;
        cin>>a>>b;
        if(a>b){
            if(a%2==0){
                cout<<a*a-b+1<<endl;
            }
            else{
                cout<<a*a-(a-1)*2+b-1<<endl;
            }
        }
        else{
            if(b%2==0){
                cout<<b*b-(b-1)*2+a-1<<endl;
            }
            else{
                cout<<b*b-a+1<<endl;
            }
        }
    }
    return 0;
}