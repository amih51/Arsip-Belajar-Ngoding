#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    deque<int> dq;
    bool order = true;

    for(int i = 0; i < n; i++){
        string s; cin >> s;

        if(s == "add"){
            int x, y; cin >> x >> y;
            if(order) for(int j = 0; j < y; j++) dq.push_back(x);
            else for(int j = 0; j < y; j++) dq.push_front(x);
            cout << dq.size() << endl;
        } 
        if(s == "del"){
            int y; cin >> y;
            if(order){
                cout << dq.front() << endl;
                for(int j = 0; j < y; j++) dq.pop_front();
            }else{
                cout << dq.back() << endl;
                for(int j = 0; j < y; j++) dq.pop_back();
            }
        } 
        if(s == "rev"){
            if(order) order = false;
            else order = true;
        }
    }

}