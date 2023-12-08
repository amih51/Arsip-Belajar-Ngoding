#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

char ch[1000][1000];
ll h, w; 

void del(ll r, ll c){
    if(r < 0 || c < 0 || r >= h || c >= w) return;

    if(ch[r][c] != '#') return;

    ch[r][c] = '.';
    del(r+1, c);
    del(r-1, c);
    del(r, c+1);
    del(r, c-1);
    del(r+1, c+1);
    del(r-1, c-1);
    del(r-1, c+1);
    del(r+1, c-1);
}


void solve() {
    cin >> h >> w;
    for(ll i = 0; i < h; i++){
        string t; cin >> t;
        for(ll j = 0; j < w; j++) ch[i][j] = t[j];
    }

    ll ans = 0;
    for(ll i = 0; i < h; i++){
        for(ll j = 0; j < w; j++){
            if(ch[i][j] == '#'){
                ans++; del(i, j);
            }
        }
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}