#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0)
#define ll long long

int main() {
    fast;
    int n;
    cin >> n;
    int i = 1;
    while (i * i <= n) i++;
    cout << "The largest square has side length " << i - 1 << ".";
}