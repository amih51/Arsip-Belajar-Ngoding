#include <bits/stdc++.h>
using namespace std;

int r, c;
int nilai;
short matrix[25][25];
short hasil[25][25];

void count(int b, int k, int ball) {
    if (b < 0 || k < 0 || b >= r || k >= c || matrix[b][k] != ball) {
        return;
    }
    
    nilai++;
    matrix[b][k] = -1;
    
    count(b + 1, k, ball);
    count(b, k + 1, ball);
    count(b - 1, k, ball);
    count(b, k - 1, ball);
}

void del(int b, int k, int ball) {
    if (b < 0 || k < 0 || b >= r || k >= c || matrix[b][k] != ball) {
        return;
    }

    matrix[b][k] = -1;
    hasil[b][k] = -1;

    del(b + 1, k, ball);
    del(b, k + 1, ball);
    del(b - 1, k, ball);
    del(b, k - 1, ball);
}

void runtuh() {
    for (int j = 0; j < c; j++) {
        vector<int> val;
        
        for (int i = 0; i < r; i++) {
            if (hasil[i][j] != -1) {
                val.push_back(hasil[i][j]);
                hasil[i][j] = -1;
            }
        }
        
        int idx = val.size() - 1;
        int i = r - 1;
        while(idx >= 0) {
            hasil[i][j] = val[idx];
            idx--; i--;
        }
    }
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> r >> c;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            hasil[i][j] = matrix[i][j];
        }
    }

    int iMax, jMax;
    int scoreMax = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matrix[i][j] != -1) {
                nilai = 0;
                count(i, j, matrix[i][j]);
                if (nilai > scoreMax){
                    scoreMax = nilai;
                    iMax = i; jMax = j;
                }
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            matrix[i][j] = hasil[i][j];
        }
    }
    
    del(iMax, jMax, matrix[iMax][jMax]);
    runtuh();

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (hasil[i][j] == -1){
                cout << ".";
            } else {
                cout << hasil[i][j];
            }
            (j == c - 1) ? cout << "\n" : cout << " ";
        }
    }
}
