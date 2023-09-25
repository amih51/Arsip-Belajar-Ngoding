#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

ull gcf(ull a, ull b){
    if(a % b == 0) return b;
    else return gcf(b, a % b);
}

int main(){
    ull a, b; cin >> a >> b;
    ull c, d; cin >> c >> d;

    int tem = gcf(a, b);
    a /= tem; b /= tem;

    tem = gcf(c, d);
    c /= tem; d /= tem;

    ull deno, nume;
    deno = b * d;
    nume = a * d + b * c;

    tem = gcf(nume, deno);
    nume /= tem; deno /= tem;

    cout << nume << " " << deno;
}