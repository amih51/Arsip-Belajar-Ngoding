#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n; //berapa jumlah soal
    for(int i = 0; i < n; i++){
        long long l, r; cin >> l >> r; //batas kiri kanan
        int res = -1;
        for(long long j = l; j <= r; j++){
            long long md = j; // mencari pembagi terkecil dari angka [l,r]
            for(long long k = 2; k <= pow(j,0.5); k++){
                if(j%k == 0){
                    md = k;
                    break;
                }
            }
            if(md != j){
                cout << md << " " << j - md << '\n';
                res++;
                break;
            }
        }
        if(res == -1){
            cout << -1 << endl;
        }
    }
}