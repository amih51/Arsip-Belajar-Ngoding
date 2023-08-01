#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int count = 0;
    int temp = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] <= 5 - k){
            temp++;
            if(temp == 3){
                temp = 0;
                count++;
                }
        }else{
            break;
        }
    }
    cout << count;
}