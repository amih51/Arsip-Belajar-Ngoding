#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    int tem;
    while(scanf("%d", &tem) != EOF){
        arr.push_back(tem);
    }
    int n = arr.size();
    for(int i = n-1; i >= 0; i--){
        printf("%d\n",arr[i]);
    }
}