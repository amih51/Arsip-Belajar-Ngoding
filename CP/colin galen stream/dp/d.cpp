#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

ll t, n, p, q, k;


void solve() {
    cin >> n >> k;

    ll a[n], b[n];

    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];

    ll left[n+2] = {0};
    ll right[n+2] = {0};
    ll sum[n+1] = {0};

    for(ll i = 1; i <= n; i++){
        left[i] = left[i-1] + a[i-1] * b[i-1];
        right[n-i+1] = right[n-i+2] + a[n-i] * b[n-i];
        sum[i] = sum[i-1] + a[i-1];
    }

    ull ans = 0;
    for(ll i = 0; i <= n-k; i++){
        ull temp = left[i] + (sum[i+k] - sum[i]) + right[i+k+1];
        ans = max(ans, temp);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}