#include <bits/stdc++.h>
using namespace std;

string s;
int n;
vector<string> str;
int l=0, r=0;


bool same(string tem){
    if(l+r > tem.length()) return false;

    for(int i = 0; i < l; i++){
        if(tem[i] != s[i])return false;
    }
    for(int i = 0; i < r; i++){
        if(tem[tem.length()-i-1] != s[s.length()-i-1])return false;
    }

    return true;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> s >> n;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '*'){
            break;
        }else{
            l++;
        }
    }
    for(int i = s.length()-1; i >= 0; i--){
        if(s[i] == '*'){
            break;
        }else{
            r++;
        }
    }

    for(int i = 0; i < n; i++){
        string tem;
        cin >> tem;
        if(same(tem)) str.push_back(tem);
    }
    for(int i = 0; i < str.size(); i++){
        cout << str[i] << "\n";
    }
}