#include <bits/stdc++.h>
using namespace std;

int arr[500];
int dp[50001];
int n, m; 

void solve(){
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    cin >> m;

    for(int i = 1; i <= m; i++){
        dp[i] = INT_MAX-1;
        for(int j = 0; j < n; j++){
            if(arr[j] <= i){
                dp[i] = min(dp[i], dp[i-arr[j]] + 1);
            }
        }
    }

    if(dp[m] != INT_MAX-1) cout << dp[m];
    else cout << -1;
}

int main(){
    solve();
}