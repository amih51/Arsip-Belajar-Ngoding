#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;



void solve() {
    ll n; cin >> n;

    ll d[n];
    for(ll i = 0; i < n; i++) cin >> d[i];

    ll ans = 0;
    for(ll i = 1; i < 10; i++){
        if(i <= n && i <= d[i-1]) ans++;
        if(i <= n && 11*i <= d[i-1]) ans++;
        if(i*11 <= n && i <= d[i*11-1]) ans++;
        if(i*11 <= n && 11*i <= d[i*11-1]) ans++;
    } 
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}