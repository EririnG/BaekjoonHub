#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m, temp;
	cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
	{
		a[i] = i + 1;
	}
	for (int x = 0; x < m; ++x)
	{
		int i, j;
		cin >> i >> j;
		for (i; i < j; ++i)
		{
			temp = a[i - 1];
			a[i - 1] = a[j - 1];
			a[j - 1] = temp;
			--j;
		}
	}
	for (int i = 0; i < a.size(); ++i)
	{
		cout << a.at(i)<<" ";
	}
	return 0;
}
