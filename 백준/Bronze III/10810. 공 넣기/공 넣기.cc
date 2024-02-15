#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	for (int x = 0; x < m; ++x)
	{
		int i, j, k;
		cin >> i >> j>> k;
		
		for (i; i <= j; ++i)
		{
			a[i - 1] = k;
		}
	}
	for (int i = 0; i < a.size(); ++i)
	{
		cout << a.at(i)<<" ";
	}
	return 0;
}
