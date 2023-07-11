#include <iostream>

using namespace std;

int main() {
 
int n;

 cout << "Masukkan nilai ke-n :";
 cin >> n;

int x = n - 1;
 int a = 1;
 int b = 1;
 cout << a << "\n" << b << endl;
  for(int i = 1; i <= x; i++){
    a += b;
    cout << a << endl;
    b += a;
    cout << b << endl;
  }
  return 0;
}