#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	vector<pair<int, int>> n_arr;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;
		n_arr.push_back({x, y});
	}
	sort(n_arr.begin(), n_arr.end());
	for (auto i : n_arr)
	{
		cout << i.first <<" " << i.second << '\n';
	}
	
	return 0;
}
