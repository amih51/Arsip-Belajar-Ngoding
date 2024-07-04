#include <bits/stdc++.h>
using namespace std;
struct item{
    int w, p, idx;
};

item treasure[100];
int dp[101][2001];
int n, k, ans = INT_MIN, idx = 0;


void solve(){
    for(int i = 0; i < k; i++){
        for(int j = 1; j <= n; j++){
            dp[i+1][j] = dp[i][j];
            if(treasure[i].w <= j){
                int val = dp[i][j - treasure[i].w] + treasure[i].p;
                if(val >= dp[i+1][j]){
                    dp[i+1][j] = val;
                }
            }
        }
    }
    vector<int> chosen;
    int i = k, j = n;
    while(i > 0 && j > 0){
        if(dp[i][j] != dp[i-1][j]){
            chosen.push_back(treasure[i-1].idx);
            j -= treasure[i-1].w;
        }
        i--;
    }
    sort(chosen.begin(), chosen.end());
    for(int i : chosen) cout << i << endl;

    // for(int i = 1; i <= k; i++){
    //     for(int j = 1; j <= n; j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}

int main(){
    cin >> n >> k;
    for(int i = 0; i < k; i++){
        cin >> treasure[i].w >> treasure[i].p;
        treasure[i].idx = i + 1;
    } 
    solve();
}