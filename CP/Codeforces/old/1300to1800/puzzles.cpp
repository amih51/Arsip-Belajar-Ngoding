#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int diff = INT_MAX;
    vector<int> arr;
    for(int i = 0; i < m; i++){
        int tem; cin >> tem;
        arr.push_back(tem);
    }
    sort(arr.begin(),arr.end());
    for(int i = n-1; i < m; i++){
        diff = min(diff, arr[i] - arr[i-n+1]);
    }
    cout << diff;
}
