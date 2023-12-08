#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;



void solve() {
    ll n; cin >> n;

    ll d, ans = 0;
    for(ll m = 1; m <= n; m++){
        cin >> d;
        for(ll dt = 1; dt <= d; dt++){
            string sdt = to_string(m) + to_string(dt); 
            if(size(set<char>(sdt.begin(), sdt.end())) == 1) ans++;
        }
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}