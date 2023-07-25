#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    int side = abs(x) + abs(y);
    if(x>0 && y>0){
        cout << "0 " << side << " " << side << " 0";
    }
    if(x<0 && y>0){
        cout << -side << " 0 0 " << side;
    }
    if(x<0 && y<0){
        cout << -side << " 0 0 " << -side;
    }
    if(x>0 && y<0){
        cout << "0 " << -side << " " << side << " 0";
    }
}