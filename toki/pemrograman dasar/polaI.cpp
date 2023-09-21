#include <iostream>
using namespace std;

int main(){
    int n, m; scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++){
        if(i % m == 0){
            printf("*");
        }else{
            printf("%d", i);
        }
        if(i != n) printf(" ");
    }
}