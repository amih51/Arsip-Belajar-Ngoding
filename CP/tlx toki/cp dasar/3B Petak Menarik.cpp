#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m, k; cin >> n >> m >> k;
    int arr[100][100];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    int r = -1, c = -1;
    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++){
            int temp = 1;
            if(j > 0){
                temp *= arr[i][j-1];
            }
            if(j < m - 1){
                temp *= arr[i][j+1];
            }
            if(i > 0){
                temp *= arr[i-1][j];
            }
            if(i < n - 1){
                temp *= arr[i+1][j];
            }
            if(temp == k){
                r = i; c = j;
                cout << r + 1 << " " << c + 1 << "\n";
                return 0;
            }
        }
    }

    cout << r + 1 << " " << c + 1 << "\n";
}