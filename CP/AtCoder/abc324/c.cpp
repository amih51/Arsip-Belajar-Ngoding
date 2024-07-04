#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

ll n; 
string t, s;

bool check(const string &s, const string &t){
    if(s.length() > t.length()) return check(t, s);
    if(s.length() < t.length() - 1) return false;

    ull i = 0, j = 0, miss = 0;
    while(i < s.length()){
        if(s[i] == t[j]){
            i++; j++;
        }else{
            miss++;
            if(miss > 1) return false;
            if(s.length() == t.length()) i++;
            j++;
        }
    }
    return true;
}

void solve() {
    cin >> n >> t;

    vector<int> arr;
    for(ll i = 0; i < n; i++){
        cin >> s;
        if(check(s, t)) arr.push_back(i+1);
    }
    cout << arr.size() << endl;
    for(ll in : arr) cout << in << ' ';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}