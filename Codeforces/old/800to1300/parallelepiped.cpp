#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c; cin>>a>>b>>c;
    unsigned long long volsq = (unsigned long long) a*b*c;
    unsigned long long volume = sqrt(volsq);
    int x = volume/a;
    int y = volume/b;
    int z = volume/c;
    cout << 4*(x+y+z);
}