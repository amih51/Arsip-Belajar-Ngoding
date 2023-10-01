#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, k; cin >> n >> k;
    vector<int> vec;
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        vec.push_back(temp);
    } 
    sort(vec.begin(), vec.end());
    cout << vec[k-1] << "\n";
}