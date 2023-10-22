#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int n, m; 

ll c[300000];

ll f(ll x) {
    ll ret = 0;
    for (int i = 0; i < n; i++) {
        ret += x / c[i];
    }
    return ret;
}

ll bsearch(ll x) {
    ll l = 1, r = 1LL << 60, ret = 1;
    while(l <= r) {
        ll mid = (l + r) / 2;
        if (f(mid) >= x) {
            r = mid - 1;
            ret = mid;
        } else {
            l = mid + 1;
        }
    }
    return ret;
}

int main() {
    ios::sync_with_stdio(), cin.tie(), cout.tie();
    cin >> n >> m;

    for (int i = 0; i < n; i++) cin >> c[i];

    cout << bsearch(m + 1) - bsearch(m) << "\n";
}