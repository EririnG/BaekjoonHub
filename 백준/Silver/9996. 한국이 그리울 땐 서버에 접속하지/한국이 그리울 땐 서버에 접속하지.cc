#include<bits/stdc++.h>
using namespace std;
int n,ask;
string s, hi,bye, ans;
int main()
{
	cin >> n;
	cin >> s;
	ask = s.find('*');
	hi = s.substr(0,ask);
	bye = s.substr(ask+1);
	for(int i = 0; i<n; ++i)
	{
		cin >> ans;
		if(ans.size() < hi.size() + bye.size())
		{
			cout << "NE" << '\n';
			continue;
		}
		if(hi == ans.substr(0,hi.size()) && bye == ans.substr(ans.size()-bye.size()))
		{
			cout << "DA" << '\n';	
		}
		else
		{
			cout << "NE" << '\n';
		}
	}
}