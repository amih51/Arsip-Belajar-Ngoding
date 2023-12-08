#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;



void solve() {
    string s; cin >> s;

    bool check = 0;
    for(ll i = 1; i < 16; i+=2) 
        if(s[i] != '0') check = 1;
    if(check) cout << "No";
    else cout << "Yes";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}