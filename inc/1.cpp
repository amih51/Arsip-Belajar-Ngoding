#include <bits/stdc++.h>
using namespace std;

int count = 0;
int team[200];
bool used[200];
int n, m; 

int main(){
    cin >> n >> m;

    for(int i = 0; i < n; i++) cin >> team[i];

    sort(team, team+n);

    int count = 0, total = 0;
    for(int i = n - 3; i >= 0; i--){
        if(team[i+2] - team[i] <= m){
            if(!count){
                for(int j = 0; j < 3; j++){
                    total += team[j+i];
                } 
                break;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                if(team[k] - team[i] <= m) count++;
            }
        }
    }

    if(!count) cout << -1 << "\n";
    else cout << count << " " << total << "\n";
}