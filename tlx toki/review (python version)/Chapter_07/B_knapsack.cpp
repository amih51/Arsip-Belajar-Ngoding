#include <bits/stdc++.h>
using namespace std;

int w[2001] = {}, v[2001] = {};
int dp[2001][101] = {};

int solve (int n, int k){
    if (dp[n][k] != -1) 
        return dp[n][k];
    
    if (k == 1) {
        dp[n][k] = (n >= w[1] ? v[1] : 0);
        return dp[n][k];
    }

    dp[n][k] = solve(n, k - 1);

    if (n >= w[k])
        dp[n][k] = max(dp[n][k], solve(n - w[k], k - 1) + v[k]);
    
    return dp[n][k];
}

int main(){
    memset(dp, -1, sizeof dp);
    int n, k; cin >> n >> k;
    for (int i = 1; i <= k; i++)
        cin >> w[k - i + 1] >> v[k - i + 1];

    for (int i = 0; i <= n; i++)
        solve(i, k);

    int tmp = n;
    while (dp[tmp][k] == dp[n][k])
        tmp--;
    tmp++;

    vector<int> res;
    for (int i = k; i >= 1; i--)
        if (tmp >= w[i] && dp[tmp][i - 1] <= dp[tmp - w[i]][i - 1] + v[i]) {
            tmp -= w[i];
            res.push_back(k - i + 1);
        }

    for (int i = 0; i < res.size(); i++)
        cout << res[i] << endl;
}