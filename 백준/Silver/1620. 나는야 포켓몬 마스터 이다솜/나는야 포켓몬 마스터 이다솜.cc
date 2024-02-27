#include <bits/stdc++.h>
using namespace std;
string name[100001];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	map<string, int> poket;

	for (int i = 0; i < n; ++i)
	{
		string tmp;
		cin >> tmp;
		poket.insert({ tmp,i });
		name[i] = tmp;
	}
	
	for (int i = 0; i < m; ++i)
	{
		string tmp;
		cin >> tmp;
		if (65 > tmp[0])
			cout << name[stoi(tmp)-1] << '\n';
		else
			cout << poket.find(tmp)->second + 1 << '\n';
	}
	
	return 0;
}
