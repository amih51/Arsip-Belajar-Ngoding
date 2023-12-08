#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    char c[] = {'h','e','l','l','o'};
    int idx = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == c[idx]){
            if(idx == 4){
                cout << "YES";
                return 0;
            }
            idx++;
        }
    }
    cout << "NO";
}