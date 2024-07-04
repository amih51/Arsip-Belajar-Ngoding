#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> ms;
    int n, x, y, l = 0; 
    string s;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;

        if(s == "add"){
            cin >> x >> y;
            for(int j = 0; j < y; j++) ms.push(x - l);
            cout << ms.size() << endl;
        }
        else if(s == "del"){
            cin >> y;
            cout << ms.top() + l << endl;
            for(int j = 0; j < y; j++) ms.pop();
        }
        else if(s == "adx"){
            cin >> x; l += x;
        }
        else if(s == "dex"){
            cin >> x; l -= x;
        }
    }
}