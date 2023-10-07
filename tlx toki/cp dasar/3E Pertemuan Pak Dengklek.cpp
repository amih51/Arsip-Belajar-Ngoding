#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n; cin >> n;

    vector<vector<string>> arr(11);
    for(int i = 0; i < n; i++){
        string temp; cin >> temp;
        int len = temp.length();
        arr[len].push_back(temp);
    }

    vector<string> res;
    for(int i = 0; i < 11; i++){
        sort(arr[i].begin(), arr[i].end());
        for(int j = 0; j < arr[i].size(); j++){
            res.push_back(arr[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        cout << res[i] << "\n";
    }
}