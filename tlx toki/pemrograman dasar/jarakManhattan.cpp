#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int r = abs(c-a) + abs(d-b);
    printf("%d\n", r);
}