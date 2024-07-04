#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int min=INT_MAX, min1, min2;
    for(int i=0;i<n; i++){
        if(i==n-1){
            int temp = abs(arr[i]-arr[0]);
            if(min>temp) {
                min = temp;
                min1 = i;
                min2 = 0;
                // cout << min1+1 << " " << min2+1 << " " << temp << endl;
            }
        }else{
            int temp = abs(arr[i]-arr[i+1]);
            if(min>temp) {
                min = temp;
                min1 = i;
                min2 = i+1;
                // cout << min1+1 << " " << min2+1 << " " << temp << endl;
            }
        }
    }
    cout << min1+1 << " " << min2+1;
}