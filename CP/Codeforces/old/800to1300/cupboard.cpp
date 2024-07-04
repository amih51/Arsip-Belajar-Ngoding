#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    int left = 0, right = 0;
    for (int i = 0; i < n; i++){
        int l, r;
        cin >> l >> r;

        if(l == 0){
            left++;
        }
        if(r == 0){
            right++;
        }
    }
    int result = 0;
    if(n-left < left){
        result += n - left;
    }else{
        result += left;
    }
    if(n-right < right){
        result += n - right;
    }else{
        result += right;
    }
    cout << result;
}