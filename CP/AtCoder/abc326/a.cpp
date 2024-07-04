#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;



void solve() {
    ll x, y; cin >> x >> y;

    if(y-x <= 2 && y-x >= -3) cout << "Yes";
    else cout << "No";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}