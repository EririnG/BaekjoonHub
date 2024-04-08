#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[1000001], b[1000001];
int a_idx = 0, b_idx = 0;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
		cin >> a[i];
	for (int i = 0; i < m; ++i)
		cin >> b[i];
	
	while (a_idx < n && b_idx < m)
	{
		if (a[a_idx] <= b[b_idx])
			cout << a[a_idx++] << " ";
		else
			cout << b[b_idx++] << " ";
	}
	while(a_idx < n)
		cout << a[a_idx++] << " ";
	while (b_idx < m)
		cout << b[b_idx++] << " ";
	
	return 0;
}