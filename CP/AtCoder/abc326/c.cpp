#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;



void solve() {
    ll n, m; cin >> n >> m;

    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);

    ll ans = 0, r = 0;
    for(ll i = 0; i < n; i++){
        while(r < n && a[r] < a[i] + m) r++;
        ans = max(ans, r-i);
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}