#include<bits/stdc++.h>
using namespace std;

int n, k; 
vector<int> arr;
vector<bool> used;

void bk(int a){
    if(a >= k){
        bool cek = true;
        for(int i = 1; i < k; i++){
            if(arr[i-1] > arr[i]) cek = false;
        }
        if(cek){
            for(int i = 0; i < k; i++){
                cout << arr[i];
                if(i < n) cout << " ";
            }
            cout << "\n";
        }
    }else{
        for(int i = 1; i <= n; i++){
            if(!used[i]){
                used[i] = true;
                arr[a] = i;
                bk(a + 1);
                used[i] = false;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> k;
    arr.resize(k);
    used.resize(n+1, 0);
    bk(0);
}