#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n, m; 
    cin >> n >> m;
    int matrixA[75][75];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrixA[i][j];
        }
    }
    cin >> n >> m;
    int matrixB[75][75];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrixB[i][j];
        }
    }

    bool next = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(matrixA[i][j] != matrixB[i][j]){
                next = true;
                break;
            }
        }
        if(next) break;
    }
    if(!next){
        cout << "identik";
        return 0;
    }

    next = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(matrixA[i][j] != matrixB[n-1-i][j]){
                next = true;
                break;
            }
        }
        if(next) break;
    }
    if(!next){
        cout << "horisontal";
        return 0;
    }

    next = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(matrixA[i][j] != matrixB[i][n-1-j]){
                next = true;
                break;
            }
        }
        if(next) break;
    }
    if(!next){
        cout << "vertikal";
        return 0;
    }

    next = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(matrixA[i][j] != matrixB[j][i]){
                next = true;
                break;
            }
        }
        if(next) break;
    }
    if(!next){
        cout << "diagonal kanan bawah";
        return 0;
    }

    next = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(matrixA[i][j] != matrixB[n-1-j][n-1-i]){
                next = true;
                break;
            }
        }
        if(next) break;
    }
    if(!next){
        cout << "diagonal kiri bawah";
        return 0;
    }
    cout << "tidak identik";
}