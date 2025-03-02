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
    string a;
    string b;
    if(n<=3 && n!=1) cout<<"NO SOLUTION";
    else{
        for(int i=1;i<=n;i++){
            if(i%2==0){
                a+=to_string(i);
                a+=" ";
            }
            else {
                b+=to_string(i);
                b+=" ";
            }
        }
        cout<<a+b<<endl;
    }
    return 0;
}