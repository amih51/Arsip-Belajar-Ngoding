#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

ll t, n, p, q, k;


void solve() {
    cin >> n >> k >> p;

    ll a[n];
    ll b[k];

    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < k; i++) cin >> b[i];
    sort(a, a+n);
    sort(b, b+k);

    const ll inf = 1e17;

    ll dp[k+1][n+1];
    for(ll i = 0; i <= k; i++)
        for(ll j = 0; j <= n; j++)
            dp[i][j] = inf;

    dp[0][0] = 0;
    

    for(ll i = 0; i < k; i++){
        for(ll j = 0; j <= n; j++){
            dp[i+1][j] = min(dp[i+1][j], dp[i][j]);

            if(j<n) 
                dp[i+1][j+1] = min(dp[i+1][j+1], max(dp[i][j], abs(a[j] - b[i]) + abs(b[i] - p)));
        }
    }
    cout << dp[k][n] << '\n';

    // for(ll i = 0 ; i < k+1; i++){
    //     for(ll j = 0; j < n+1; j++){
    //         if(dp[i][j] == inf)
    //             cout << "_ ";
    //         else
    //             cout << dp[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}