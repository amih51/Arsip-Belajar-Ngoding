#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mod = 1e9 + 7;

ll bigpow(ll a, ll b) {
    if (a == 0) return 0;
    if (b == 0) return 1;

    if (b & 1) return bigpow(a, b - 1) * (a % mod) % mod;
    else {
        a = bigpow(a, b >> 1) % mod;
        return (a * a) % mod;
    }
}

int main(){
    int p, q, r; cin >> p >> q >> r;
    int a = p - r + 1;
    int total = 0;

    for(int i = 1; i <= a; i++) total += bigpow(q, i);

    cout << total;
}