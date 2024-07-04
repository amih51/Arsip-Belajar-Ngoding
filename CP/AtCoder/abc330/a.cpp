#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;



void solve() {
    ll n, l; cin >> n >> l;
    ll res = 0;

    ll temp;
    for(ll i = 0; i < n; i++){
        cin >> temp;
        if(temp >= l) res++;
    }

    cout << res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}