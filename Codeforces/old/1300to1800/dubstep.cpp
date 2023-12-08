#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    vector<string> arr;
    string tem = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            if(tem.length() != 0){
                arr.push_back(tem);
                tem = "";
            }
            i += 2;
            continue;
        }
        tem = tem + s[i];
    }
    if(tem.length() != 0){
        arr.push_back(tem);
    }
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i];
        if(i != arr.size() - 1) cout << " ";
    }
}

int main(){
    solve();
}