#include <iostream>
#include <unordered_map>
using namespace std;

void solve(){
    int a, b; cin >> a >> b;
    string s; cin >> s;
    unordered_map<char, int> charCount;

    bool ans = true;
    for (char c : s) {
        if (charCount.find(c) != charCount.end()) {
            charCount[c]++;
        } else {
            charCount[c] = 1;
        }
    }

    int ganjil = 0, genap = 0; 
    for (const auto& pair : charCount) {
        if(pair.second % 2 == 1) ganjil++;
        else genap++;
    }
    if(ganjil > 1){
        int temp = b - ganjil;
        if(temp < -1){
            ans = false;
        } 
    }
    if (ans){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
}
