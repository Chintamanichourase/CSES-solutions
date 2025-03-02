#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    for (long long i = 1; i <= n; i++) {
        __int128_t total = ((__int128_t)(i * i) * (i * i - 1)) / 2;
        __int128_t atk = (__int128_t)(i - 1) * (i - 2) * 4;
        cout << (long long)(total - atk) << endl;
    }

    return 0;
}
