#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;

    int arr[n];
    float orange = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        orange += arr[i];
    }
    // float total = n * 100;
    // cout << orange / n;
    cout << setprecision(12) << orange / n;
    // printf("%.12lf", orange / n);
}