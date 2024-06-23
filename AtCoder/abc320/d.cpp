#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, m; cin >> n >> m;
    
    vector<array<ll, 4>> arr(m);
    for(auto &a : arr)
        for(auto &b : a) cin >> b;

    ll const inf = 1e17;

    vector<array<ll, 2>> cor(n, {inf, inf});
    cor[0][0] = 0;
    cor[0][1] = 0;

    for(ll i = 1; i <= n; i++){
        for(auto &a : arr){
            if(a[0] != inf){
                if(a[0] == i){
                    cor[a[1]-1][0] = cor[i-1][0] + a[2];
                    cor[a[1]-1][1] = cor[i-1][1] + a[3];
                }
                else if(a[1] == i){
                    cor[a[0]-1][0] = cor[i-1][0] - a[2];
                    cor[a[0]-1][1] = cor[i-1][1] - a[3];
                }
            }
        }
    }

    for(auto &c : cor){
        if(c[0] == inf)
            cout << "undecidable" << endl;
        else
            cout << c[0] << ' ' << c[1] << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}
