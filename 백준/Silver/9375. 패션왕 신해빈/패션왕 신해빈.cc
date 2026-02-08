#include<bits/stdc++.h>
using namespace std;
int m, n, pos;
string s, hi,bye, ans;
int main()
{
	cin >> m;
	for(int i =0; i< m;++i)
	{
		cin >> n;
		map<string, int> mmap;
		for(int j = 0; j< n;++j)
		{
			cin >> hi >> bye;
			mmap[bye]++;
		}
		long long ret = 1;
		for(auto c:mmap)
		{
			ret *= ((long long)c.second + 1);
		}
		ret--;
		cout << ret << '\n';
	}
}