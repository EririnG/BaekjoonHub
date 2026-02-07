#include <bits/stdc++.h>

using namespace std;
int n,m;
string temp;
map<int, string> map1;
map<string,int> map2;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m;
	for(int i = 1; i<=n; ++i)
	{
		cin >> temp;
		map1.insert({i,temp});
		map2.insert({temp,i});
	}
	
	for(int i = 0; i< m; ++i)
	{
		cin >> temp;
		if(temp[0] >= 'A')
		{
			cout << map2[temp] << '\n';
		}
		else
		{
			cout << map1[stoi(temp)] << '\n';
		}
	}
}