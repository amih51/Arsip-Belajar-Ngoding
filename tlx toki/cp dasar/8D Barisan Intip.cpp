#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;

int main(){
    int arr[N];
    int n; cin >> n;
    int ma = INT_MAX;
    int total = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] >= ma){
            total += i+1;
            ma = arr[i];
            continue;
        }
        for(int j = i; j >= 0 && arr[j] <= arr[i]; j--){
            if(arr[j] <= arr[i]) total++;
        }
    }

    cout << total;
}