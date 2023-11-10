#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    deque<int> dq;

    for(int i = 0; i < n; i++){
        string s; int t; cin >> s;

        if(s == "push_front"){
            cin >> t;
            dq.push_front(t);
        } 
        if(s == "push_back"){
            cin >> t;
            dq.push_back(t);
        } 
        if(s == "pop_front") dq.pop_front();
        if(s == "pop_back") dq.pop_back();
    }

    for(int i : dq) cout << i << endl;
}