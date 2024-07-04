#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;



void solve() {
    ll n, m; cin >> n >> m;

    const ll inf = 1e17;

    vector<ll> arr(n+1, inf);

    ll t;
    for(ll i = 0; i < m; i++) {
        cin >> t;
        arr[t] = 0;
    }

    t = n-1;
    while(t > 0){
        if(arr[t] == inf) 
            arr[t] = arr[t+1] + 1;
        t--;
    }

    for(ll i = 1; i <= n; i++) cout << arr[i] << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}