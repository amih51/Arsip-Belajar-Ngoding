#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n, k; cin >> n >> k;
    unsigned long long result;
    if(n%2==0){
        if(n/2 >= k){
            result = 1 + (2*(k-1));
        }else{
            result = 2*(k-n/2);
        }
    }else{
        if((n+1)/2 >= k){
            result = 1 + (2*(k-1));
        }else{
            result = 2*(k-((n+1)/2));
        }
    }
    cout << result;
}