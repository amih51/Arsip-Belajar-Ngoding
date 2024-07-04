#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
    int sem = 0, comp = 0;

    while(tt--){
        int a, b; cin >> a >> b;
        sem += a; comp += b;
    }

    cout << sem << " " << comp << endl;
}