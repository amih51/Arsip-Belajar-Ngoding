#include <bits/stdc++.h>
using namespace std;

double x[300], y[300];

double luas(int a, int b, int c){
    return abs(x[a]*(y[b]-y[c])+x[b]*(y[c]-y[a])+x[c]*(y[a]-y[b]))/2;
}
int main(){

    int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i];

    bool b = false;
    double res = 1e9;
    for(int i = 0; i < n - 2; i++)
        for(int j = i + 1; j < n - 1; j++)
            for(int k = j + 1; k < n; k++){
                double t = luas(i, j, k);
                if(t == 0) continue;

                if(t == res){
                    b = false;
                }else if(t < res){
                    b = true;
                    res = t;
                }
            }
    if(!b) cout << "-1";
    else cout << fixed << setprecision(2) << res;
}