#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    char cur = '0';
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '0'){
            if(cur == '1') {
                count = 0;
                cur = '0';
            }
            count++;
        }else{
            if(cur == '0') {
                count = 0;
                cur = '1';
            }
            count++;
        }
        if(count == 7) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}

int main(){
    solve();
}