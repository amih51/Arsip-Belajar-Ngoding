#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    string a, b, c, d; cin >> a >> b >> c >> d;

    size_t found = a.find(b);
    a.erase(found, b.length());
    found = a.find(c) + c.length();
    a.insert(found, d);

    cout << a;
}