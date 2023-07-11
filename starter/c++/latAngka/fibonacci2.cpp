#include <iostream>

using namespace std;

int main() {
 
int n;

 cout << "Masukkan nilai ke-n :";
 cin >> n;

 int a = 1;
 int b = 0;
 int c;
 cout << a  << endl;
  for(int i = 1; i <= n-1; i++){
    c = a + b;
    cout << c << endl;
    b = a;
    a = c;
    }
  return 0;
}