#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;

    char cake[n][m];
    set<int> row, column;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        for(int j = 0; j < m; j++){
            if(s[j]=='S'){
                row.insert(i); column.insert(j);
            }
        }
    }
    int a = n - row.size();
    int b = m - column.size();
    int result = a*m + b*n - a*b;
    cout << result;
}