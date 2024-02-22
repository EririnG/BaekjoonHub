#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	vector<int> num_arr;
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		num_arr.push_back(tmp);
	}
	sort(num_arr.begin(), num_arr.end(),greater<int>());
	cout << num_arr[k - 1];
	return 0;
}
