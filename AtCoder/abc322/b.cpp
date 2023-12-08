#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;



void solve() {
    ll n, m; cin >> n >> m;
    string s, t; cin >> s >> t;

    bool suf = 0, pref = 0;

    bool check = 1;
    for(ll i = 0; i < n; i++){
        if(s[i] != t[i]) check = 0;
    }
    if(check) pref = 1;

    check = 1;
    for(ll i = 0; i < n; i++){
        if(s[i] != t[i+(m-n)]) check = 0;
    }
    if(check) suf = 1;

    if(suf && pref) cout << 0;
    else if(pref) cout << 1;
    else if(suf) cout << 2;
    else cout << 3;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}