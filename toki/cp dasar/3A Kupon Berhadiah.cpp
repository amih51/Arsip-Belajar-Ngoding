#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m; cin >> n >> m;
    vector<int> participant;
    vector<bool> sign;
    int idxMin, diffMin = INT_MAX, mi = INT_MAX;

    for(int i = 0; i < n; i++){
        int tem; cin >> tem;
        participant.push_back(tem);
        int temMin = abs(m - tem);
        if(temMin < diffMin){
            mi = tem;
            idxMin = i;
            diffMin = temMin;
        }else if(temMin == diffMin){
            if(tem < participant[idxMin]){
                idxMin = i;
            }
        }
    }
    cout << participant[idxMin] << "\n";
}