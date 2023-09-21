#include<iostream>
using namespace std;

int n, t; 
int barisA[1001];
int barisB[1001];

void inp(int arr[], int size){
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
}
void outp(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i];
        (i == size - 1) ? cout << "\n" : cout << " ";
    }
}
void swp(int &a, int &b) {
   int temp = a;
    a = b;
    b = temp;
}

int main(){
    
    cin >> n;
    inp(barisA, n);
    inp(barisB, n);

    cin >> t;
    for(int i = 0; i < t; i++){
        char p, q;
        int tem,x,y; cin >> p >> x >> q >> y;
        x--; y--; //!
        if(p == 'A'){
            if(q == 'A'){
                swp(barisA[x], barisA[y]);
            }else{
                swp(barisA[x], barisB[y]);
            }
        }else{
            if(q == 'A'){
                swp(barisB[x], barisA[y]);
            }else{
                swp(barisB[x], barisB[y]);
            }
        }
    }
    outp(barisA,n);
    outp(barisB,n);
}


// #include <cstdio>

// int N;
// int Q;
// int ar[2][1001];

// void swap(int &a, int &b) {
//     int tem = a;
//     a = b;
//     b = tem;
// }

// int main() {
//   scanf("%d", &N);
//   for (int i = 0; i < 2; i++) {
//     for (int j = 0; j < N; j++) {
//       scanf("%d", &ar[i][j]);
//     }
//   }

//   scanf("%d", &Q);
//   for (int i = 0; i < Q; i++) {
//     char buff1[5], buff2[5];
//     int x, y;
//     scanf("%s %d %s %d", buff1, &x, buff2, &y);

//     int p = buff1[0] - 'A';
//     int q = buff2[0] - 'A';
//     x--;
//     y--;
//     swap(ar[p][x], ar[q][y]);
//   }

//   for (int i = 0; i < 2; i++) {
//     for (int j = 0; j < N; j++) {
//       printf("%d", ar[i][j]);
//       if (j+1 < N) {
//         printf(" ");
//       }
//     }
//     printf("\n");
//   }
// }