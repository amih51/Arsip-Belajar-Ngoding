#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n; scanf("%d", &n);
    int kecil = INT_MAX, besar = INT_MIN;
    for(int i = 0; i < n; i++){
        int tem; scanf("%d", &tem);
        if(tem < kecil) kecil = tem;
        if(tem > besar) besar = tem;
    }
    printf("%d %d", besar, kecil);
}