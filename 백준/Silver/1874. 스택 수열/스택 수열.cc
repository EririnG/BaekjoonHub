#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, cnt = 1;
	vector<int> array;
	vector<char> ans;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int data;
		cin >> data;
		while (cnt <= data)
		{
			array.push_back(cnt);
			cnt += 1;
			ans.push_back('+');
		}
		if (array.back() == data)
		{
			array.pop_back();
			ans.push_back('-');
		}
		else
		{
			cout << "NO";
			return 0;
		}
	}

	for (int i = 0; i < ans.size(); ++i)
	{
		cout << ans[i] << "\n";
	}

	return 0;
}