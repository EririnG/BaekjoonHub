#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int k, m;
	unsigned int max_num=0, ans = 0;
	vector<int> lan_arr;
	cin >> k >> m;
	for (int i = 0; i < k; ++i)
	{
		unsigned int tmp;
		cin >> tmp;
		lan_arr.push_back(tmp);
		max_num = max(max_num, tmp);
	}
	unsigned int left = 1, right = max_num, mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		unsigned int check = 0;
		for (int i = 0; i < k; ++i)
		{
			check += lan_arr[i] / mid;
		}

		if (check >= m)
		{
			left = mid + 1;
			ans = max(mid, ans);
		}
		else
			right = mid - 1;
	}
	cout << ans;


	return 0;
}
