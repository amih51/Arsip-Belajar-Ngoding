#include <bits/stdc++.h>
using namespace std;

struct nilai{
    string id;
    int s1, s2, s3;
};

nilai n[80];
int N, M;

void swp(nilai &x, nilai &y){
    nilai t = x;
    x = y;
    y = t;
}

void sortt(){
    for(int i = 0; i < M; i++){
        for(int j = i+1; j < N; j++){
            if(n[i].s3 < n[j].s3) swp(n[i], n[j]);
            else if(n[i].s3 == n[j].s3){
                if(n[i].s2 < n[j].s2) swp(n[i], n[j]);
                else if(n[i].s2 == n[j].s2){
                    if(n[i].s1 < n[j].s1) swp(n[i], n[j]);
                }
            }
        }
    }
}

void solve(){
    string s;

    cin >> N >> M >> s;

    for(int i = 0; i < N; i++){
        cin >> n[i].id >> n[i].s1 >> n[i].s2 >> n[i].s3;
    }

    sortt();

    bool res = false;
    for(int i = 0; i < M; i++){
        if(n[i].id == s){
            res = true;
            break;
        }
    }

    if(res){
        cout << "YA" << endl;
    }else{
        cout << "TIDAK" << endl;
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}