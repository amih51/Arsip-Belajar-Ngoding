#include<bits/stdc++.h>
typedef long long ll;
using namespace std; 

int a, b, c, n;

int kalimod(int x, int y){
    return ((ll) x * y) % n;
} 

int kuadratmod(int x){
    return ((ll) x * x) % n;
} 

int f(int x, int y) {
    if (x == 0) return 0;
    if (y == 0) return 1;
    if (y & 1) return kalimod(x, f(x, y-1));
    else return kuadratmod(f(x, y/2));
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> a >> b >> c >> n;
    ll hasil = a;
    for (int i = 0; i < c; i++) {
        hasil = f(hasil, b) % n;
    }
    cout << hasil + 1;
}