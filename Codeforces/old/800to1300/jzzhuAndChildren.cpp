#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;

    queue <int> q, idx;
    for(int i=1; i<=n; i++){
        int a; cin >> a;
        q.push(a);
        idx.push(i);
    }
    int result;
    while(!q.empty()){
        result = idx.front();
        if(m>=q.front()){
            q.pop();
            idx.pop();
        }else{
            int temp;
            temp = q.front()-m;
            q.pop();
            q.push(temp);
            temp = idx.front();
            idx.pop();
            idx.push(temp);
        }
    }
    cout << result;
}