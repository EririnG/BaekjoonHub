#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int test_case;
	cin >> test_case;
	vector<int> dp_table = { 0,1,1 };
	for (int i = 3; i < 41; ++i)
	{
		dp_table.push_back(dp_table[i - 2] + dp_table[i - 1]);
	}
	for (int i = 0; i < test_case; ++i)
	{
		int tmp;
		cin >> tmp;
		if (0 == tmp)
			cout << 1 << " " << 0 << '\n';
		else if (1 == tmp)
			cout << 0 << " " << 1 << '\n';
		else
			cout << dp_table[tmp - 1] << " " << dp_table[tmp] << '\n';
	}
	return 0;
}
