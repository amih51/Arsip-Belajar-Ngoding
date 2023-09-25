#include <bits/stdc++.h>
using namespace std;

vector<bool> prime(990000, true);
vector<int> res, quest;
int ma = 0;

void sieve(){
    for(int i = 2; i < 990000; i++){
        if(prime[i]){
            res.push_back(i);
            for(int j = 2*i; j <= 990000; j += i){
                prime[j] = false;
            }
        }
        if(res.size() >= ma){
            break;
        } 
    }
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n; cin >> n;

    for(int i = 0; i < n; i++){
        int tem; cin >> tem;
        quest.push_back(tem);
        ma = max(ma, tem);
    }

    sieve();

    for(int i = 0; i < n; i++){
        cout << res[quest[i]-1] << "\n";
    }
}