#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000;

ll bigpow(ll a, ll b) {
    if (a == 0) return 0;
    if (b == 0) return 1;

    if (b & 1) return bigpow(a, b - 1) * (a % mod) % mod;
    else {
        a = bigpow(a, b >> 1) % mod;
        return (a * a) % mod;
    }
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll a, b; cin >> a >> b;

    ll res = bigpow(a, b);
    if(pow(a, b) >= mod) {
        ll temp = res;
        short digit = 0;
        if (!temp) digit = 1;
        for (; temp > 0; digit++, temp /= 10);
        digit = 6 - digit;
        while (digit--) cout << 0;
        cout << res;
    } else cout << res;
}