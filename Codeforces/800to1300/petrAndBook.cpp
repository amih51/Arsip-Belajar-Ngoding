#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int day[7];
    int last = -1;
    for(int i=0; i<7; i++){
        cin >> day[i];
    }
    while(last<0){
        for(int i=0; i<7; i++){
            if (day[i]>=n){
                last = i + 1;
                break;
            }
            n-=day[i];
        }
    }
    cout << last;
}