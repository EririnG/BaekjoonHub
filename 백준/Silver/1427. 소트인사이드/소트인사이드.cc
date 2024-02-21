#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string n;
	vector<int> n_arr;
	cin >> n;
	for (int i = 0; i < n.length(); ++i)
	{
		n_arr.push_back(n[i]-48);
	}
	sort(n_arr.begin(), n_arr.end(),greater<int>());
	for (auto i : n_arr)
		cout << i;
	return 0;
}
