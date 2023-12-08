#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;



void solve() {
    ll a, b; cin >> a >> b;
    ll x = 1;
    for(ll i = 0; i < a; i++) x *= b;
    ll y = 1;
    for(ll i = 0; i < b; i++) y *= a;
    cout << x + y;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}