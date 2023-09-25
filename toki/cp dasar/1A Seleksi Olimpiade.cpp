#include <bits/stdc++.h>
using namespace std;

struct parti{
    string id;
    int v1, v2, v3;
};

parti arr[80];
int n, m;

void swp(parti &x, parti &y){
    parti temp = x; x = y; y = temp;
}

void srt(){
    for(int j=0; j<m; j++) {
        for(int k=0; k<n; k++) {
            if(j==k) continue;
            if(arr[k].v3 > arr[j].v3) {
                swp(arr[k], arr[j]);
            } else if(arr[k].v3 == arr[j].v3) {
                if(arr[k].v2 > arr[j].v2) {
                    swp(arr[k], arr[j]);
                } else if(arr[k].v2 == arr[j].v2) {
                    if(arr[k].v1 > arr[k].v1) swp(arr[k], arr[j]);
                }
            }
        }
    }
}

void solution(){
    cin >> n >> m;
    string target; cin >> target;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i].id >> arr[i].v1 >> arr[i].v2 >> arr[i].v3;
    }

    srt();

    int i;
    for(i = 0; i < m; i++){
        if(arr[i].id == target) break;
    }

    (i < m) ? cout << "YA" : cout << "TIDAK";
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solution();
    }
}