// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n, m; cin >> n >> m;
//     int arr[m];
//     for(int i = 0; i<m; i++){
//         int a; cin >> a;
//         arr[i]=a;
//     }
//     unsigned long long time = 0;
//     for(int i = 0; i<m-1; i++){
//         if(i==0)time += arr[i];
//         if(arr[i]<=arr[i+1]){
//             time += (unsigned long long) arr[i+1]-arr[i];
//         }else{
//             time += (unsigned long long) n - arr[i] + arr[i+1];
//         }
//     }
//     cout << time-1;
// }
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[m];
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    int current_pos = 1;
    long long total_time = 0;

    for (int i = 0; i < m; i++) {
        if (a[i] >= current_pos) {
            total_time += a[i] - current_pos;
        } else {
            total_time += n - current_pos + a[i];
        }
        current_pos = a[i];
    }

    cout << total_time << endl;

    return 0;
}
