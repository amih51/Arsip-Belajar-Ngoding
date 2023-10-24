#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, b; cin >> n >> b;
    vector<ll> th;
    for(int i = 0; i < n; i++){
        ll temp; cin >> temp;
        th.push_back(temp);
    }
    sort(th.begin(), th.end(), greater<int>());
    ll total = 0;
    int count = 0;
    while(total <= b){
        total += th[count];
        count++;
    }
    cout << count;
}