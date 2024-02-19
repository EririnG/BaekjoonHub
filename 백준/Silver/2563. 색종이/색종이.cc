#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int test_case, row = 100, column = 100, ans = 0;
	vector<vector<int>> int_arr(row,vector<int>(column));
	cin >> test_case;
	for (int i = 0; i < test_case; ++i)
	{
		int witdh, height;
		cin >> witdh >> height;
		for (int x = witdh; x < witdh + 10; ++x)
		{
			for (int y = height; y < height + 10; ++y)
			{
				if (0 == int_arr[x][y])
				{
					int_arr[x][y] = 1;
					ans++;
				}
			}
		}
	}
	cout << ans;
	return 0;
}