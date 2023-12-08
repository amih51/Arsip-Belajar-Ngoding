#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<int, int>> arr(n);
    for(int i = 0; i < n; i++){
        int tem; cin >> tem;
        arr[i].first = tem;
        arr[i].second = i + 1;
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n/2; i++){
        cout << arr[i].second << " " << arr[n-i-1].second << "\n"; 
    }
}