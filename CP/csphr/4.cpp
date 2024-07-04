#include <bits/stdc++.h>
using namespace std;

const int mod = 1e4;

int fac(int x){
    if(x == 1 || x == 0) return 1;
    return x * fac(x-1);
}

int main(){
    int p; cin >> p;
    if (p <= 5) {
        cout << 1 << endl;
        return 0;
    }

    int total = 1;
    for(int i = 2; i < p - 3; i++){
        total = (total + i) % mod;
    }

    cout << total << endl;
}