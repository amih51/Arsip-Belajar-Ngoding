#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;

int n; 
pair<int, int> waktu[N];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> waktu[i].second >> waktu[i].first;
        waktu[i].first += waktu[i].second - 1;
    }
    sort(waktu, waktu + n);
    int ans = 1, cur = waktu[0].first; 
    for(int i = 1; i < n; i++){
        if(waktu[i].second > cur){
            ans++;
            cur = waktu[i].first;
        }
    }
    cout << ans;
}