#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    
    int maxRooms = 0;
    int currentRooms = 0;
    
    for (int i = 0, j = 0; i < n; i++) {
        while (arr[i] - arr[j] > m) {
            j++;
            currentRooms--;
        }
        currentRooms++;
        maxRooms = max(maxRooms, currentRooms);
    }
    
    int result = n - maxRooms;
    cout << result << "\n";
    
    return 0;
}
