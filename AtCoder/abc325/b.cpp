#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;


void solve() {
    ll n;
    cin >> n;

    ll e[24] = {0};
    for (ll i = 0; i < n; i++){
        ll w, x;
        cin >> w >> x;
        e[x] += w;
    }

    ll ans = 0;
    for (ll i = 0; i < 24; i++) {
        ll sum = 0;

        for(ll j = 0; j < 9; j++){
            sum += e[(i+j) % 24];
        }
        
        ans = max(ans, sum);
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}
