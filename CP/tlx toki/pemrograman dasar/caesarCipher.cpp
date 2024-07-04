#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int k; cin >> k;

    for(int i = 0; i < s.length(); i++){
        int diff = (s[i] - 'a' + k) % 26;
        s[i] = diff + 'a';
    }

    cout << s;
}