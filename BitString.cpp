#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;

ll power(ll base, ll exp, ll mod) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;  // Prevent overflow
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
int main()
{
    ll n;
    cin >> n;
    cout << power(2, n, MOD) << endl;
    return 0;
}