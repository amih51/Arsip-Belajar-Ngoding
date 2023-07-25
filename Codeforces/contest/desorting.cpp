#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int m;
        cin >> m;
        int arr[n];
        int hasil, sort = 0;
        for (int j = 0; j < m;j++){
            cin >> arr[j];
            if(j>0){
                if(arr[j-1]>arr[j]){
                    sort++;
                }
            }
        }
        if(sort!=0){
            hasil = 0;
        }else{
            int minrange = INT_MAX;
            for (int j = 0; j < m-1; j++){
                int range = abs(arr[j] - arr[j + 1]);
                if(range<minrange){
                    minrange = range;
                }
            }

            if(minrange%2==0){
                hasil = minrange / 2 + 1;
            } else{
                hasil = (minrange - 1) / 2 + 1;
            }
        }
        cout << hasil << endl;
    }
}