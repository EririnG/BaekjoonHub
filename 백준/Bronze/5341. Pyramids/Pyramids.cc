#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0)
#define ll long long

int dp[10000001];
int main() {
    fast;
    for (int i = 1; i < 10000001; i++) dp[i] += dp[i - 1] + i;
    int n;
    while (1) {
        cin >> n;
        if (n == 0) break;
        cout << dp[n] << "\n";
    }
}

