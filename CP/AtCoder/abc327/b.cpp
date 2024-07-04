#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;



void solve() {
    ll b; cin >> b;

    for(ll i = 1; i < 16; i++){
        ll a = 1;

        for(ll j = 0; j < i; j++) a *= i;
        
        if(a == b){
            cout << i; return;
        }
    }

    cout << -1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}