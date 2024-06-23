#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;



void solve() {
    string s; cin >> s;

    ll ans = 1;
    for(ll i = 2; i < s.length(); i++){
        for(ll j = 0; j < s.length()-i; j++){
            if(s[j] == s[j+i]){
                bool cek = 1;
                for(ll k = 0; k <= i/2; k++){
                    if(s[j+k] != s[j+i-k]) cek = false;
                }
                if(cek) ans = max(ans, i+1);
            }
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