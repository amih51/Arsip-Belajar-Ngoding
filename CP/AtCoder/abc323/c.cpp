#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

struct task{
    ll idx, sc;
};

bool comp(task a, task b){
    return a.sc > b.sc;
}

void solve() {
    ll n, m; cin >> n >> m;

    task a[m];
    for(ll i = 0; i < m; i++){
        cin >> a[i].sc;
        a[i].idx = i;
    } 

    string s[n];
    ll score[n], big = -1;
    for(ll i = 0; i < n; i++) {
        cin >> s[i];
        score[i] = 0;
        for(ll j = 0; j < m; j++){
            if(s[i][j] == 'o') score[i] += a[j].sc;
        }
        score[i] += i+1;
        big = max(big, score[i]);
    }

    sort(a, a+m, comp);
    
    for(ll i = 0; i < n; i++){
        ll j = 0, count = 0; 
        while(score[i] < big){
            if(s[i][a[j].idx] != 'o'){
                score[i] += a[j].sc;
                count++;
            }
            j++;
        }
        cout << count << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}