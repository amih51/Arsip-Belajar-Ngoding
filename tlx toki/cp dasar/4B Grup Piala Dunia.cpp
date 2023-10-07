#include <bits/stdc++.h>
using namespace std;
int arr[5];
int score[5] = {0};
int n; 

bool valid(int a, int b){
    if(a == n - 1){
        for(int i = 0; i < n; i++){
            if(arr[i] != score[i]) return false;
        }
        return true;
    }else if(b == n){
        return valid(a + 1, a + 2);
    }else{
        score[a] += 3;
        if(valid(a, b + 1)) return true;
        score[a] -= 3;

        score[a]++; score[b]++;
        if(valid(a, b + 1)) return true;
        score[a]--; score[b]--;

        score[b] += 3;
        if(valid(a, b + 1)) return true;
        score[b] -= 3;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        for(int i = 0; i < n; i++) cin >> arr[i];

        if(valid(0, 1)) cout << "YES\n";
        else cout << "NO\n";
        
        for(int i = 0; i < n; i++){
            score[i] = 0;
        } 
    }
}