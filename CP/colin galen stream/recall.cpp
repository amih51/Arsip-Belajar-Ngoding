#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

ll t, n, p, q, k;


void solve() {
    cin >> n;

    ll dp[61];
    dp[0] = 1;
    dp[1] = 0;

    for(ll i = 2; i <= n; i++){
        dp[i] = dp[i-2] * 2;
    }

    cout << dp[n] << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}