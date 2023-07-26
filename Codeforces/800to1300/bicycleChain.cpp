#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arrn[n];
    for(int i=0;i<n;i++){
        cin >> arrn[i];
    }
    int m; cin >> m;
    int arrm[m];
    for(int i=0;i<m;i++){
        cin >> arrm[i];
    }
    int max = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arrm[j] % arrn[i] == 0 && arrm[j] / arrn[i] > max){
                max = arrm[j] / arrn[i];
                count = 1;
            }else if(arrm[j] % arrn[i] == 0 && arrm[j] / arrn[i] == max){
                count++;
            }
        }
    }
    cout << count;
}