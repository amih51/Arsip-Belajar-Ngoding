#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; scanf("%d",&n);
    map<int,int> hash;
    int maxVal = 0;
    int maxKey = 0;
    for(int i = 0; i < n; i++){
        int tem; cin >> tem;
        hash[tem]++;
        maxVal = max(maxVal, hash[tem]);
    }
    for(const auto& pair : hash){
        if(pair.second == maxVal){
            maxKey = max(maxKey, pair.first);
        }
    }
    printf("%d",maxKey);
}