#include <bits/stdc++.h>
using namespace std;

int nilai;
short matrix[25][25];

void count(int b, int k, int ball){
    if(ball == matrix[b][k]){
        nilai++;
        matrix[b][k] = -1;
        count(b+1, k, ball);
        count(b, k+1, ball);
        count(b-1, k, ball);
        count(b, k-1, ball);
    }else{
        return;
    }
}


int main(){
    nilai = 0;
    int m, n; cin >> m >> n;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    int b, k; cin >> b >> k;
    count(b, k, matrix[b][k]);

    cout << nilai*(nilai-1) << "\n";
}