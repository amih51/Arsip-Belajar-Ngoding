#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, o; cin >> n >> m >> o;
    int matA[n][m];
    int matB[m][o];
    // int matC[n][o];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matA[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < o; j++){
            cin >> matB[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < o; j++){
            int x = 0; 
            for(int k = 0; k < m; k++){
                x += matA[i][k] * matB[k][j];
            }
            cout << x;
            (j == o - 1) ? cout << "\n" : cout << " ";
        }
    }
}