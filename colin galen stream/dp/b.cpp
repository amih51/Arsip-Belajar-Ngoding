#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

ll t, n, p, q, k;


void solve() {
    cin >> n >> k;

    string s; cin >> s;

    bool word[n] = {0};

    for(ll i = 0; i < k; i++){
        char c; cin >> c;

        for(ll j = 0; j < n; j++){
            if(c == s[j]) word[j] = 1;
        }
    }

    ll dp[n+1];
    dp[0] = 0;
    ll ans = 0;

    for(ll i = 1; i <= n; i++){
        if(word[i-1]) dp[i] = dp[i-1] + 1;
        else dp[i] = 0;

        ans += dp[i];
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}