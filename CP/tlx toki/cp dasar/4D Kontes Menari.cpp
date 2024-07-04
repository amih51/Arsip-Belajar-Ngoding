#include <bits/stdc++.h>
using namespace std;

int vec[10];
char type[10];
int n, r, y, j; 
vector<bool> used(10, 0);
vector<int> res(100000, 0);
int countt = 1;

void score(int maxR, int sum, char prev, bool my){
    if(maxR == r){
        res[sum]++;
        return;
    }
    for(int i = 0; i < n; i++){
        if(used[i]) continue;

        int temp = vec[i];
        if(prev == 'L') temp /= 2;
        else if(prev == 'P') temp *= 2;

        if(my) temp += y;

        used[i] = true;
        score(maxR + 1, sum + temp, type[i], my || type[i] == 'Y');
        used[i] = false;
    }
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s; cin >> s >> s;
    cin >> n >> r >> y >> j;
    for(int i = 0; i < n; i++){
        cin >> vec[i] >> type[i];
    } 

    for(int i = 0; i < n; i++){
        used[i] = true;
        score(1, vec[i], type[i], type[i] == 'Y');
        used[i] = false;
    }

    for(int i = 0; i < j; i++){
        int temp; cin >> temp;
        int sum = 0;
        for(int j = temp + 1; j < 100000; j++){
            sum += res[j];
        }
        cout << sum << "\n";
    }
}