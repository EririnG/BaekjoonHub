#include<bits/stdc++.h>
using namespace std;
int n,m, cnt[15001],ret;

int main()
{
	cin >> n;
	cin >> m;
	for(int i = 0; i <n; ++i)
	{
		cin >> cnt[i];
	}
	if (m > 200001)
		cout << 0 << '\n';
	else
	{
		for(int i = 0; i<n; ++i)
		{
			for(int j = i+1; j < n; ++j)
			{
				if(cnt[i] + cnt[j] == m) ret++;
			}
		}
		cout << ret << '\n';
	}
		
	return 0;
}