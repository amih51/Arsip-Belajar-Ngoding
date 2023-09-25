#include <bits/stdc++.h>
using namespace std;

int nJawaban;
int m[128][128];
string jawaban[128*128];

bool hm(int r, int c, int k){
    int val = m[r][c];
    for(int i = r; i < r+k; i++){
        for(int j = c; j < c+k; j++){
            if(m[i][j] != val) return false;
        }
    }
    return true;
}

void qt(int r, int c, int k, string s){
    if(hm(r, c, k)){
        if(m[r][c] == 1){
            jawaban[nJawaban] = "1" + s;
            nJawaban++;
        }
    }else{
        qt(r, c, k/2, s + "0");
        qt(r, c + k/2, k/2, s + "1");
        qt(r + k/2, c, k/2, s + "2");
        qt(r + k/2, c + k/2, k/2, s + "3");
    }
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int r, c; cin >> r >> c;

    // inisialisasi
    int maxrc = max(r, c);
    int pow2 = 1;
    while(pow2 < maxrc){
        pow2 *= 2;
    }

    for(int i = 0; i < pow2; i++){
        for(int j = 0; j < pow2; j++){
            m[i][j] = 0;
        }
    }

    // input
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> m[i][j];
        }
    }

    nJawaban = 0;
    qt(0, 0, pow2, "");

    cout << nJawaban << "\n";
    for(int i = 0; i < nJawaban; i++){
        cout << jawaban[i] << "\n";
    }
}