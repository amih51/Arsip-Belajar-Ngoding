#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;



void solve() {
    ll n; cin >> n;

    ll s[n], c[n];

    for(ll i = 0; i < n; i++) cin >> s[i];
    for(ll i = 0; i < n; i++) cin >> c[i];

    const ll inf = 1e17;
    ll ans = inf;

    ll dp[n+1][3];

    for(ll i = 0; i < n; i++){
        dp[i][0] = c[i];
        for(ll j = 1; j < 3; j++){
            dp[i][j] = inf;
            for(ll k = 0; k < i; k++){
                if(s[k] < s[i])
                    dp[i][j] = min(dp[i][j], dp[k][j-1] + c[i]);
            }
        }
        ans = min(ans, dp[i][2]);
    }

    if(ans == inf) cout << "-1\n";
    else cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}