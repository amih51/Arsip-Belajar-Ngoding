#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e5;

pair<ll, ll> ckl[N];

int main(){
    int n; ll b; cin >> n >> b;
    for(int i = 0; i < n; i++) cin >> ckl[i].first >> ckl[i].second;
    sort(ckl, ckl + n);
    ll ans = 0;
    int i = 0;
    while (b > 0 && i < n) {
        if (b >= ckl[i].first) {
            ll maxPurchase = min(b / ckl[i].first, ckl[i].second);
            ans += maxPurchase;
            b -= maxPurchase * ckl[i].first;
        }
        i++;
    }
    cout << ans << endl;
}