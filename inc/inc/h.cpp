#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct item{
    int w, v;
};

vector<item> ts(1e5+6);
vector<ll> cart(1e5+5);
int n, k;

bool comp(item a, item b){
    if(a.w == b.w) return a.v > b.v;
    return a.w < b.w;
}

int main(){
    cin >> n >> k;

    ts[0].w = 0; ts[0].v = 0;
    for(int i = 1; i <= n; i++){
        cin >> ts[i].w >> ts[i].v;
    } 
    sort(ts.begin(), ts.begin() + n + 1, comp);

    for(int i = 0; i < k; i++){
        cin >> cart[i];
    }
    sort(cart.begin(), cart.begin() + k);
    
    ll sum = 0;
    priority_queue<int> pq;

    int j = 1;
    for(int i = 0; i < k; i++){
        while(j <= n && cart[i] >= ts[j].w){
            pq.push(ts[j].v);
            j++;
        }
        if(!pq.empty()){
            sum += pq.top();
            pq.pop();
        }
    }

    cout << sum << "\n";
}
