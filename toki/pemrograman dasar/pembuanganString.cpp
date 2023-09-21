#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t; cin >> s >> t;
    
    size_t found = s.find(t);

    while(found != string::npos){
        s.erase(found, t.length());
        found = s.find(t);
    }

    cout << s;
}