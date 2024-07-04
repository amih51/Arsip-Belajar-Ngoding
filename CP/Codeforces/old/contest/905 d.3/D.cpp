#include <bits/stdc++.h>
using namespace std;

const int N = 1e9;

int arr[N];

void solve(){
    char c; int a, b; cin >> c >> a >> b;
    for(int i = a, i < b; i++){
        arr[i]++;
    }
    
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
}