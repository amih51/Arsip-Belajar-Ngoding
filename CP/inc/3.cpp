#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

ull n, p, x;
ll big, small;

int main(){
    cin >> n >> p >> x;
    vector<ll> d(n);
    cin >> d[0];
    big = d[0], small = d[0];
    for(int i = 1; i < n; i++){
        int temp;
        cin >> temp;
        d[i] = d[i-1] + temp;
        small = min(d[i], small);
        big = max(d[i], big);
    } 

    ll last = d[n-1];

    if(p + big < x){
        cout << -1; return 0;
    }

    p -= ((p-x)/abs(last) + 1)*last;

    ull ans;
    vector<ll> d2(n);
    for(int i = 0; i < n; i++){
        d2[i] = p + d[i];
        if(d[i] >= x){
            if(!ans) ans = d[i];
            if(d[i] < ans) ans = d[i];
        }
        if(d2[i] >= x){
            if(!ans) ans = d2[i];
            if(d2[i] < ans) ans = d2[i];
        }
    } 
    cout << ans;
}