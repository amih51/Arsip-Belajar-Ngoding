#include <bits/stdc++.h>
using namespace std;

void kp(){
    int a, b, k, x; cin >> a >> b >> k >> x;
    for(int i = 0; i < k; i++){
        x = abs(a*x + b);
    }
    cout << x;
}

int main(){
    ios::sync_with_stdio(0),cin.tie();
    kp();
}