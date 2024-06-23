#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;



void solve() {
    ll t; cin >> t;
    ll a; string s;
    ll l, r;
    for(ll i = 0; i < t; i++){
        l = 0; r = 0;
        cin >> a >> s;
        for(ll j = 0; j < a; j++){
            if(s[j] == '+') r++;
            else l++; 
        }
        cout << abs(l-r) << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}