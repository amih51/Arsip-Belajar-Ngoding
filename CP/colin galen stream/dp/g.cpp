#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

ll t, n, p, q, k;


void solve() {
    ll v1, v2, t, d;
    cin >> v1 >> v2 >> t >> d;

    ll time[t];
    time[t-1] = v2;

    for(ll i = t-2; i >= 0; i--) time[i] = time[i+1] + d;

    ll cur = v1, sum = 0, idx;
    for(ll i = 0; i < t; i++){
        sum += cur;
        if(cur >= time[i]){
            idx = i;
            sum -= cur - time[i];
            break;
        }
        cur += d;
    }
    for(ll i = t-1; i > idx; i--) sum += time[i];

    cout << sum << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}