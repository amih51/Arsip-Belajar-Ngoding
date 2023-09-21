#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> arr;
vector<bool> used;

void zz(int x) {
    if (x >= n) {
        bool zigzag = 1;
        for(int j = 1; j < n - 1; j++){
            bool con1, con2;
            con1 = arr[j-1] < arr[j] && arr[j] > arr[j+1];
            con2 = arr[j-1] > arr[j] && arr[j] < arr[j+1];
            if(!(con1 || con2)){
                zigzag = 0;
                break;
            } 
        }
        if(zigzag){
            for (int i = 0; i < n; i++) {
                cout << arr[i];
            }
            cout << "\n";
            cout.flush(); 
        }
    } else {
        for (int i = 1; i <= n; i++) {
            if (!used[i]) {
                used[i] = true;
                arr[x] = i;
                zz(x + 1);
                used[i] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    arr.resize(n);
    used.resize(n + 1, false);
    zz(0);
    return 0;
}
