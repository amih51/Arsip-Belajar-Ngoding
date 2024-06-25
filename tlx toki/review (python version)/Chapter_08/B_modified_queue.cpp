#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y; cin >> n;
    deque<int> d;

    for(int i = 0; i < n; i++){
        string s; cin >> s;

        if(s == "add"){
            cin >> x >> y;
            for(int j = 0; j < y; j++) d.push_back(x);
            cout << d.size() << endl;
        } 
        if(s == "del"){
            cin >> y;
            cout << d.front() << endl;
            for(int j = 0; j < y; j++) d.pop_front();
        } 
        if(s == "rev"){
            reverse(d.begin(), d.end());
        }
    }

}