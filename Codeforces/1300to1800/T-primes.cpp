#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int sqrt_lim = 1e6 + 1;

int n;
bool prime[sqrt_lim];
set<ll> tprime;

void TPrime(){
    for (int i = 2; i*i < sqrt_lim; i++) {
        if(!prime[i])
            for (int j = i * i; j < sqrt_lim; j += i){
                prime[j] = true;
            }
    }
    for (int i = 2; i < sqrt_lim; i++){
        if (!prime[i]){
            tprime.insert((ll)i * i);
        }
    }
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    TPrime();

    cin >> n;
    for (int i = 0; i < n; i++){
        ll x; cin >> x;

        if (tprime.find(x) != tprime.end()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}