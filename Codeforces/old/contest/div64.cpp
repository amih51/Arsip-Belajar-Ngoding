#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int n = s.length();
    int zeros = 0;
    for(int i = 0; i < n; i++){
        if(zeros < 6 && s[n-1-i] == '0')zeros++;
        if(zeros == 6 && s[n-1-i] == '1'){
            cout << "yes";
            return 0;
        }
    }
    cout << "no";
}