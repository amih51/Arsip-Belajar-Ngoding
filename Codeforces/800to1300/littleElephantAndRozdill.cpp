#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    // unsigned long long arr[n];
    // for(int i=0; i<n; i++){
    //     cin >> arr[i];
    // }
    // sort(arr, arr+n);
    // if(arr[0]==arr[1]){
    //     cout << "Still Rozdill";
    // }else{
    //     cout << arr[0];
    // }

    unordered_map<long long, long long> hash;
    unsigned long long arr[n];
    int min = INT_MAX, minid;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]<min){
            min = arr[i];
            minid = i;
        }
        hash[arr[i]]++;
    }
    if(hash[min]>1){
        cout << "Still Rozdil";
        return 0;
    }
    cout << minid+1;
}