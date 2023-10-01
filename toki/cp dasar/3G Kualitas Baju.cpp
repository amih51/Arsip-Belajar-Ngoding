#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n; cin >> n;
    vector<int> arr;

    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());

    int len = arr.size();
    if(len % 2 == 0){
        printf("%.1f",(double) (arr[len / 2 - 1] + arr[len / 2]) / 2);
    }else 
        printf("%.1f",(double) arr[len / 2]);
}