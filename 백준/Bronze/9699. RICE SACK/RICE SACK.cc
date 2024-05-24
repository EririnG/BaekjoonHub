#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int cntCase; cin >> cntCase;

  for (int i = 1; i <= cntCase; i++) {
    vector<int> weights(5);
    for (int j = 0; j < 5; j++)
      cin >> weights[j];
    int maxWeight = *max_element(weights.begin(), weights.end());
    cout << "Case #" << i << ": " << maxWeight << "\n";
  }

  return 0;
}