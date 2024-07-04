#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

struct pl{
    string str;
    ll win, num;
};

bool comp(pl a, pl b){
    if(a.win == b.win) return a.num < b.num;
    return a.win > b.win;
}

void solve() {
    ll n; cin >> n;

    pl r[n];

    for(ll i = 0; i < n; i++){
        cin >> r[i].str;
        r[i].num = i+1;
        r[i].win = 0;
        for(char c : r[i].str)
            if(c == 'o') r[i].win++;
    }

    sort(r, r+n, comp);

    for(ll i = 0; i < n; i++) cout << r[i].num << ' ';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}