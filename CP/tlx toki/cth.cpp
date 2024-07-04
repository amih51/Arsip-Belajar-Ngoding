#include <bits/stdc++.h>

using namespace std;

struct Stone {
    int weight;
    int price;
};

vector<Stone> stones;
vector<int> selectedStones;
vector<int> bestSelection;
int maxPrice = 0;
int maxWeight = 0;

void knapsack(int index, int capacity, int currentPrice, int currentWeight) {
    if (index < 0) {
        if (currentPrice > maxPrice || (currentPrice == maxPrice && currentWeight < maxWeight)) {
            maxPrice = currentPrice;
            maxWeight = currentWeight;
            bestSelection = selectedStones;
        }
        return;
    }

    // Option 1: Skip the current stone
    knapsack(index - 1, capacity, currentPrice, currentWeight);

    // Option 2: Take the current stone if it doesn't exceed capacity
    if (stones[index].weight <= capacity) {
        selectedStones.push_back(index);
        knapsack(index - 1, capacity - stones[index].weight, currentPrice + stones[index].price, currentWeight + stones[index].weight);
        selectedStones.pop_back();
    }
}

int main() {
    int N, K;
    cin >> N >> K;

    stones.resize(K);
    for (int i = 0; i < K; i++) {
        cin >> stones[i].weight >> stones[i].price;
    }

    knapsack(K - 1, N, 0, 0);

    // Print the selected stones in ascending order
    sort(bestSelection.begin(), bestSelection.end());

    for (int index : bestSelection) {
        cout << index + 1 << "\n";  // Adding 1 to the index to match the 1-based numbering
    }

    return 0;
}
