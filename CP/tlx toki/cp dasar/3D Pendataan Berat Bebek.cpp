#include <bits/stdc++.h>
using namespace std;

vector<int> arr(100000);
int n; 

int cari(int a){
    int l = 0, r = n - 1;
    while(l <= r){
        int mid = (l + r) / 2;
        if(arr[mid] <= a){
            l = mid + 1;
            if(l == n || arr[l] > a) return l;
        }else{
            r = mid - 1;
            if(r < 0) return 0;
            if(arr[mid] < a) return r + 1;
        }
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];

    int q; cin >> q;
    for(int i = 0; i < q; i++){
        int a, b; cin >> a >> b;
        int big = cari(b), small = cari(a);
        cout << big - small << "\n";
    }
}