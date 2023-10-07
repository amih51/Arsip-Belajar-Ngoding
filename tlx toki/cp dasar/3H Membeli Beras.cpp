#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, x; cin >> n >> x;
    vector<int> w, c;
    vector<pair<double, int>> price;
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        w.push_back(temp);
    }
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        c.push_back(temp);
        price.push_back(make_pair((double) c[i] / w[i], i));
    }
    sort(price.rbegin(), price.rend());
    double res = .0;
    for(int i = 0; i < n; i++){
        int idx = price[i].second;
        if(w[idx] > x){
            res += price[i].first * x;
            x = 0;
        }else{
            res += c[idx];
            x -= w[idx];
        }
        if(x == 0) break;
    }
    printf("%.5f", res);
}