#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;



void solve() {
    ll n, x; cin >> n >> x;

    ll t, sum = 0;
    while(n--){
        cin >> t;
        if(t <= x) sum += t;
    }

    cout << sum;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}