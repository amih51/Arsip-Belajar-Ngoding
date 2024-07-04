#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;



void solve() {
    ll n; cin >> n;
    bool cek = 1;
    ll a[100]; cin >> a[0];
    for(ll i = 1; i < n; i++){
        cin >> a[i];
        if(a[i] != a[i-1]) cek = 0;
    }
    if(cek) cout << "Yes";
    else cout << "No";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}