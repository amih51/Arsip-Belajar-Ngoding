#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int group = 1;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(i > 0 && arr[i-1]!=arr[i]){
            group++;
        }
    }
    cout << group;
}