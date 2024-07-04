#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> arr;
    int sum = 0;
    while(n--){
        int tem; cin >> tem;
        arr.push_back(tem);
        sum += tem;
    }
    sort(arr.rbegin(), arr.rend());
    int count = 0, mine = 0;
    for(int i = 0; i < arr.size(); i++){
        mine += arr[i];
        count++;
        if(mine > sum/2) break;
    }
    cout << count;
}