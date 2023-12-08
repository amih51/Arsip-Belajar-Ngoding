#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;


void solve() {
    ll n; cin >> n;

    while(n % 2 == 0) n /= 2;
    while(n % 3 == 0) n /= 3;

    if(n == 1) cout << "Yes";
    else cout << "No";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}