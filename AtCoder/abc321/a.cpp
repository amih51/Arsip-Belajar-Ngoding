#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;



void solve() {
    string n; cin >> n;

    ll s = n[0] - '0';
    for(ll i = 1; i < n.length(); i++){
        if(n[i]-'0' >= s) {
            cout << "No"; return;
        }
        s = n[i] - '0';
    }
    cout << "Yes";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}