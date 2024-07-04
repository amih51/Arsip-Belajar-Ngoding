#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;



void solve() {
    ll n; cin >> n;
    string s; cin >> s;

    for(ll i = 0; i < n; i++){
        if((s[i] == 'a' && s[i+1] == 'b') || (s[i] == 'b' && s[i+1] == 'a')){
            cout << "Yes"; return;
        }
    }
    cout << "No";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}