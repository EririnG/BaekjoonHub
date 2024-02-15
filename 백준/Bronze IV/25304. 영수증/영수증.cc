#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int x, n;
	int sum = 0;
	cin >> x >> n;
	for (int i = 0; i < n; ++i)
	{
		int a, a_num;
		cin >> a >> a_num;
		sum += a * a_num;
	}
	if (sum == x)
		cout << "Yes";
	else
		cout << "No";
	

	return 0;
}