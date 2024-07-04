#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;



void solve() {
    ll n; cin >> n;

    bool b = 1;
    while(b){
        ll x, y, z;
        x = n / 100;
        y = n / 10 % 10;
        z = n % 10;

        if(x*y == z) break;

        n++;
    }
    cout << n;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}