#include <bits/stdc++.h>
using namespace std;

map<int, bool> _map;
int n, m;

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n + m; ++i)
	{
		int a;
		cin >> a;
		if (_map[a] == true)
			_map.erase(a);
		else
			_map[a] = true;
	}
	cout << _map.size();

	return 0;
}