#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;



void solve() {
    ll v1, v2, t, d;
    cin >> v1 >> v2 >> t >> d;

    const ll inf = 1e17;
    ll dp[t+1][1000];
    
    for(ll i = 0; i <= t; i++)
        for(ll j  = 0; j < 1000; j++)
            dp[i][j] = -inf;

    dp[0][v1] = 0;

    for(ll i = 0; i < t; i++)
        for(ll j = 0; j < 1000 - d; j++)
            for(ll k = -d; k <= d; k++)
                if(j+k >= 0)
                    dp[i+1][j+k] = max(dp[i+1][j+k], dp[i][j] + j);

    cout << dp[t-1][v2] + v2 << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}