#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n; cin >> n;
    vector<string> arr;
    for(int i = 0; i < n; i++){
        string temp; cin >> temp;
        int idx = 0;

        while(idx < arr.size() && temp > arr[idx]) idx++;

        arr.insert(arr.begin() + idx, temp);

        cout << idx + 1 << "\n";
    }
}