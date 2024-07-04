#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t; cin >> t;
    for(int i=0; i< t; i++){
        long long n, m, k, h; cin >> n >> m >> k >> h;
        int H[n];
        int result = 0;
        for(int j=0; j<n; j++){
            cin >> H[j];
            int diff = abs(H[j]-h);
            if(diff<=(m-1)*k){
                if(diff!=0 && diff%k==0)result++;
            }
        }
        cout << result << endl;
    }
}