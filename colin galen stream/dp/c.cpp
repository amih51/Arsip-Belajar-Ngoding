#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

ll t = 1, n, p, q, k;


void solve() {
    cin >> t;

    const ll inf = 1e7;
    ll f[t+1][8];
    for(int i = 0; i <= t; i++)
        for(int j = 0; j < 8; j++)
            f[i][j] = inf;
    f[0][0] = 0;

    for(ll i = 1; i <= t; i++){
        ll a; string s;
        cin >> a >> s;
        
        ll s_mask = 0;
        for(ll j = 0; j < 3; j++){
            char c = 'A' + j;
            bool have = 0;
            for(char d : s){
                if(d == c) have = 1;
            }
            if(have) s_mask += (1 << j);
        }

        for(ll j = 0; j < 8; j++){
            f[i][j] = min(f[i][j], f[i-1][j]);
            f[i][j|s_mask] = min(f[i][j|s_mask], f[i-1][j] + a);
        }
    }

    if(f[t][7] == inf) cout << "-1\n";
    else cout << f[t][7] << '\n';

    // for(int i = 0; i <= t; i++){
    //     for(int j = 0; j < 8; j++){
    //         if(f[i][j] == inf) cout << '_';
    //         else cout << f[i][j];
    //         cout << ' ';
    //     }
    //     cout << endl;
    // }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}