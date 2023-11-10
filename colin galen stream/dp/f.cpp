#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

ll t, n, p, q, k;

ll nck(ll n, ll k){
    ll ans = 1;

    for(ll i = n; i > n-k; i--) ans *= i;

    for(ll i = 2; i <= k; i++) ans /= i;

    return ans;
}


void solve() {
    cin >> n >> k;

    ll ans = 1;

    if(k >= 2) ans += nck(n, 2);
    if(k >= 3) ans += 2 * nck(n, 3);
    if(k >= 4) ans += 9 * nck(n, 4);

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}