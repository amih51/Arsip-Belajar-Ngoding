#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> arr(n);
    int scoreFirst = 0;
    int scoreSecond = 0;
    
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++){
        int tem; cin >> tem;
        if(i%2 == 0){
            if(tem > 0) scoreFirst += tem;
        }
    }
    cout << scoreFirst;
}
