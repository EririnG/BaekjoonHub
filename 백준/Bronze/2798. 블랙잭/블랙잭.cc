#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, max = 0;
	vector<int> array;
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin >> temp;
		array.push_back(temp);
	}

	for (int i = 0; i < n-2; ++i)
	{
		for (int j = i + 1; j < n - 1; ++j)
		{
			for (int k = j + 1; k < n; ++k)
			{
				int temp = array[i] + array[j] + array[k];
				if (temp <= m)
					if (temp > max)
						max = temp;
			}
		}
	}

	cout << max;
	return 0;
}