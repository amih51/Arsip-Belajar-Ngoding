#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    int kecil = INT_MIN; bool skip = false;

    int genap = 0;
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        if(k == 4){
            if (temp % 2 == 0) genap++;
        }
        if(temp % k == 0){
            skip = 1;
        } 
        kecil = max(kecil, temp % k);
    }
    if(k == 4 && genap >= 2) skip = 1;
    if(skip){
        cout << "0\n";
    }else{
        if(k == 4){
            if(kecil == 3){
                cout << 1 << endl;
            }else{
                cout << 2 - genap << endl;
            }
        }else{
            cout << k - kecil << endl;
        }
    }
}


int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
}
