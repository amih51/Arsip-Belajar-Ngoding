#include <iostream>
using namespace std;

int main(){
    int n; scanf("%d", &n);
    int now = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            printf("%d", now);
            now++;
            if(now == 10) now = 0;
        }
        printf("\n");
    }
}