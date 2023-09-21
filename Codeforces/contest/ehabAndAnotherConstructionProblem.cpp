#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n; cin >> n;
//     if(n < 4){
//         cout << -1;
//         return 0;
//     }
//     int m = n;
//     for(int j = n; j > 3; j--){
//         for(int i = 2; i < n; i++){
//             // cout << j << " " << i << "\n";
//             if(j%i == 0){
//                 // cout << "works";
//                 m = i;
//                 break;
//             }
//         }
//         int a = j, b = m;
//         // cout << a << " " << b << "\n";
//         if(a*b > n && a/b < n){
//             cout << a << " " << b;
//             break;
//         }
//     }
// }

int main(){
    int n; cin >> n;
    if(n == 1){
        cout << -1;
        return 0;
    }
    cout << n << " " << n;
}