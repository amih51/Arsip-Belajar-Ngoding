#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n;i++){
        int m;
        cin >> m;
        int arr[m];
        for (int j = 0; j < m; j++){
            int a, b;
            cin >> a >> b;
            if(a<=10){
                arr[j] = b;
            }else{
                arr[j] = -1;
            }
        }
        int big = 0;
        int index;
        for (int j = 0; j < m; j++){
            if(arr[j]>big){
                big = arr[j];
                index = j;
            }
        }
        cout <<index + 1<< endl;
    }
}