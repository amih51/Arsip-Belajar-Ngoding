#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;



void solve() {
    ll t; cin >> t;
    ll n, a[100], b[100];
    while(t--){
        cin >> n;
        for(ll i = 0; i < n; i++) cin >> a[i];

        ll check = 0;
        for(ll i = 0; i < n; i++){
            for(ll j = i+1; j < n; j++){
                if(a[i] == a[j]){
                    check++; break;
                }
            }
        } 
        if(check < 2){
            cout << -1; continue;
        }


        for(ll i = 0; i < n; i++){
            
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}