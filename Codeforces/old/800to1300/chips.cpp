#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int hasil = -1;
    while (hasil < 0)
        for (int i = 1; i <= n; i++)
        {
            if (i > m)
            {
                hasil = m;
                break;
            }
            else
            {
                m -= i;
            }
        }
    cout << hasil;
}