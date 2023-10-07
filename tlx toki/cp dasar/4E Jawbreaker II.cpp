#include <bits/stdc++.h>
using namespace std;

int r, c;
int nilai;
short matrix[25][25];

void count(int b, int k, int ball, int m, int n) {
    if (b < 0 || k < 0 || b >= m || k >= n || matrix[b][k] != ball) {
        return;
    }
    
    nilai++;
    matrix[b][k] = -1;
    
    count(b + 1, k, ball, m, n);
    count(b, k + 1, ball, m, n);
    count(b - 1, k, ball, m, n);
    count(b, k - 1, ball, m, n);
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> r >> c;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    int scoreMax = -1;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matrix[i][j] != -1) {
                nilai = 0;
                count(i, j, matrix[i][j], r, c);
                scoreMax = max(scoreMax, nilai);
            }
        }
    }

    cout << scoreMax * (scoreMax - 1) << "\n";
}
