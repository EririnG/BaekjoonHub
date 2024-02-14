#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, x;
	vector<int> v;
	cin >> n, '\n';

	for (int i = 1; i <= n; ++i)
	{
		cin >> x;
		v.insert(v.begin() + x, i);
	}
	for (int i = n - 1; i >= 0; --i)
	{
		cout << v[i] << ' ';
	}

	return 0;
}