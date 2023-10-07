#include <bits/stdc++.h>
using namespace std;

int r, c;
int nilai;
short matrix[25][25];
short hasil[25][25];
short soal[25][25];
bool used[25][25];
bool used2[25][25];

void count(int b, int k, int ball, bool mat1) {
    if (b < 0 || k < 0 || b >= r || k >= c || matrix[b][k] != ball) {
        return;
    }
    
    nilai++;
    matrix[b][k] = -1;

    if (mat1) used[b][k] = true;
    else used2[b][k] = true;
    
    count(b + 1, k, ball, mat1);
    count(b, k + 1, ball, mat1);
    count(b - 1, k, ball, mat1);
    count(b, k - 1, ball, mat1);
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
            if (matrix[i][j] != -1) {
                val.push_back(matrix[i][j]);
                matrix[i][j] = -1;
            }
        }
        
        int idx = val.size() - 1;
        int i = r - 1;
        while(idx >= 0) {
            matrix[i][j] = val[idx];
            idx--; i--;
        }
    }
}

void backup(bool x1){
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            matrix[i][j] = soal[i][j];
            if(!x1) used2[i][j] = used[i][j];
        }
    }
}


int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> r >> c;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
            soal[i][j] = matrix[i][j];
            used[i][j] = false;
        }
    }

    int iMax, jMax;
    int scoreMax = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matrix[i][j] != -1 && !used[i][j]) {
                int scoreMax1 = 0;
                nilai = 0;
                count(i, j, matrix[i][j], 1);
                nilai = nilai * (nilai - 1);
                if (nilai > scoreMax1){
                    scoreMax1 = nilai;
                    iMax = i; jMax = j;
                }
                backup(true);
                del(iMax, jMax, matrix[iMax][jMax]);

                runtuh();
                int matrix1[25][25];
                for (int a = 0; a < r; a++) {
                    for (int b = 0; b < c; b++) {
                        matrix1[a][b] = matrix[a][b];
                    }
                }

                int scoreMax2 = 0;
                for (int a = 0; a < r; a++) {
                    for (int b = 0; b < c; b++) {
                        if (matrix[a][b] == -1 || used2[a][b]) continue;

                        nilai = 0;
                        count(a, b, matrix[a][b], 0);
                        nilai = nilai * (nilai - 1);
                        scoreMax2 = max(scoreMax2, nilai);

                        for (int q = 0; q < r; q++) {
                            for (int p = 0; p < c; p++) {
                                matrix[q][p] = matrix1[q][p];
                                used2[q][p] = used[q][p];
                            }
                        }
                    }
                }
                scoreMax = max(scoreMax, scoreMax1 + scoreMax2);
                backup(false);
            }
        }
    }
    
    cout << scoreMax << "\n";
}
