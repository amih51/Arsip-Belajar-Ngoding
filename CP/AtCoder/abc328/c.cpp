#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;


void solve() {
    ll n, q; cin >> n >> q;
    string s; cin >> s;

    ll ss[n+1];
    ss[0] = 0;
    for(ll i = 1; i <= n; i++){
        if(s[i] == s[i-1]) ss[i] = ss[i-1]+1;
        else ss[i] = ss[i-1];
    }
    ll l, r;
    while(q--){
        cin >> l >> r; 
        cout << ss[r-1] - ss[l-1] <<'\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}