#include <bits/stdc++.h>
using namespace std;

vector<int> res;
int arr[10000];
int big, small;

void batasan(int idx, int nbig, int nsmall, vector<int> hasil) {
    if (nbig + nsmall <= 1) {
        for (int x : hasil) cout << x << " ";
        exit(0);
    }

    if (nbig > 0 && arr[idx + big] != arr[idx + big + 1]) {
        hasil.push_back(arr[idx + big] + 1);
        batasan(idx + big, nbig - 1, nsmall, hasil);
        hasil.pop_back();
    } 
    if (nsmall > 0 && arr[idx + small] != arr[idx + small + 1]) {
        hasil.push_back(arr[idx + small] + 1);
        batasan(idx + small, nbig, nsmall - 1, hasil);
        hasil.pop_back();
    } 
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int m; cin >> m;

    for (int i = 0; i < m; i++) cin >> arr[i];
    sort(arr, arr + m);

    int n; cin >> n;

    int nbig = m % n;
    int nsmall = n - nbig;
    big = m / n + 1; 
    small = m / n; 

    batasan(-1, nbig, nsmall, res);
}