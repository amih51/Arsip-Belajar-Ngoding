// #include <bits/stdc++.h>
// using namespace std;


// // //! The 6k +/- rule
// // bool isPrime(int n){
// //     if(n <= 1) return false;
// //     if(n <= 3) return true;

// //     if(n % 2 == 0 || n % 3 == 0) return false;

// //     for(int i = 5; i < n; i+=6){
// //         if(n % i == 0 || n % (i + 2) == 0) return false;
// //     }

// //     return true;
// // }


// // //! Miller-Rabin
// // long long mod_pow(long long base, long long exp, long long mod) {
// //     long long result = 1;
// //     while (exp > 0) {
// //         if (exp % 2 == 1) {
// //             result = (result * base) % mod;
// //         }
// //         base = (base * base) % mod;
// //         exp /= 2;
// //     }
// //     return result;
// // }

// // bool isPrime(long long n, int iterations = 10) {
// //     if (n <= 1) return false;
// //     if (n <= 3) return true;
// //     if (n % 2 == 0) return false;

// //     long long s = n - 1;
// //     while (s % 2 == 0) {
// //         s /= 2;
// //     }

// //     for (int i = 0; i < iterations; i++) {
// //         long long a = 2 + rand() % (n - 3);
// //         long long x = mod_pow(a, s, n);
// //         if (x == 1 || x == n - 1) continue;

// //         for (long long r = 1; r < s; r *= 2) {
// //             x = mod_pow(x, 2, n);
// //             if (x == 1) return false;
// //             if (x == n - 1) break;
// //         }

// //         if (x != n - 1) return false;
// //     }

// //     return true;
// // }


// //! Brute Force
// bool isPrime(int n){
//     if(n <= 1) return false;

//     for(int i = 2; i * i <= n; i++){
//         if(n % i == 0) return false;
//     }

//     return true;
// }


// int main(){
//     int t; scanf("%d", &t);
//     vector<int> prime, power;
//     int n = t;

//     if(isPrime(n)){
//         cout << n;
//         return 0;
//     }

//     for(int i = 2; i * i <= t; i++){
//         if(n % i == 0){
//             int tem = 0;
//             while(n % i == 0){
//                 tem++;
//                 n /= i;
//             }
//             prime.push_back(i);
//             power.push_back(tem);
//         }
//     }

//     for(int i = 0; i < prime.size(); i++){
//         if(power[i] != 1){
//             printf("%d^%d", prime[i], power[i]);
//         }else{
//             printf("%d", prime[i]);
//         }
//         (i == prime.size() - 1) ? cout << "\n" : cout << " x ";
//     }
// }

#include<iostream>
using namespace std;

void faktorisasiPrima(){
    int t; cin >> t;
    for(int i = 2; i <= t; i++){
        int power = 0;
        
        while(t % i == 0){
            power++; t /= i;
        }

        if(power >= 1){
            cout << i;
            if(power > 1) cout << "^" << power;
            if(i < t) cout << " x ";
        }
    }
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    faktorisasiPrima();
}