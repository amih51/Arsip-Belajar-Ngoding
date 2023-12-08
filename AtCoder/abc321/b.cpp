#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;



void solve() {
    ll n, x; cin >> n >> x;

    ll sum = 0, big = -1, small = 100000, a;
    for(ll i = 1; i < n; i++){
        cin >> a;
        sum += a;
        big = max(big, a);
        small = min(small, a);
    }

    ll ans;
    if(x <= sum - big) 
        ans = 0;
    else if(x <= sum - small)
        ans = x - (sum - small - big);
    else 
        ans = -1;

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}