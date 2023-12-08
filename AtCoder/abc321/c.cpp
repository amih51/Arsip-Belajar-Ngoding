#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

const ll inf = 1e17;

vector<ll> ans;
ll idx = 1;

ll fil(ll a){
    if(a == 1){

    }else{
        for(ll i = 0; i < a; i++){
            ans.push_back()
        }
    }
}

void solve() {
    ll k; cin >> k;

    for(ll i = 1; i <= 10; i++){
        fil(i);
    }
    cout << ans[k] << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}