#include <bits/stdc++.h>
using namespace std;

void solve(){
    int arr[6];
    cin >> arr[0] >> arr[1] >> arr[2];

    int len = 3;
    bool sama = arr[0] == arr[1];
    while(!sama){
        for(int i = 1; i < len; i++){
            if(arr[i] == arr[i-1]){
                
            }
        } 
        sort(arr, arr+3);
    }

}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
}