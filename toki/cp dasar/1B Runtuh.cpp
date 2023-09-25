#include <bits/stdc++.h>
using namespace std;

const int MAX_R = 20;
const int MAX_C = 8;

vector<vector<bool>> arr(MAX_R, vector<bool>(MAX_C, 0));
int r, c, rF;

void drop() {
    for (int i = 0; i < c; i++) {
        int count = 0, rMax = r - 1;
        for (int j = 0; j < r; j++) {
            if (arr[j][i]){
                if (j > rF){
                    rMax = j;
                    count++;
                    break;
                } else {
                    arr[j][i] = 0;
                    count++;
                } 
            }
        }
        for (int j = rMax; j > rMax - count; j--) {
            arr[j][i] = 1;
        }
    }
}

void del(int idx) {
    for (int i = 0; i < c; i++) {
        arr[idx][i] = 0;
    }
}

int full() {
    for (int i = 0; i < r; i++) {
        bool next = 1;
        for (int j = 0; j < c; j++) {
            if (!arr[i][j]) {
                next = 0;
                break;
            }
        }
        if (next) {
            rF = i;
            return i;
        }
    }
    return -1;
}

void outp(){
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << (arr[i][j] ? '1' : '0'); 
            if(j == c-1) cout << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> r >> c;

    for (int i = 0; i < r; i++) {
        string tem;
        cin >> tem;
        for (int j = 0; j < c; j++) {
            if (tem[j] == '1') {
                arr[i][j] = 1;
            } else {
                arr[i][j] = 0;
            }
        }
    }


    int rFull = full();

    while (rFull != -1) {
        while (rFull != -1) {
            del(rFull);
            rFull = full();
        }
        drop();
        rFull = full();
    }
    
    outp();

    return 0;
}
