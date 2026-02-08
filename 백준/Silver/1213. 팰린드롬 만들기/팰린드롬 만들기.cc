#include<bits/stdc++.h>
using namespace std;
int a[26], cnt;
string s, hi,bye, ret;
char mid;
bool flag;
int main()
{
	cin >> s;
	for(int i =0; i<s.size();++i)
	{
		a[s[i]-'A']++;
	}
	
	for(int i = 0; i< 26; ++i)
	{
		if(a[i]&1)
		{
			mid = i + 'A';
			cnt++;
			a[i]--;
			flag = true;
			//cout << mid << '\n';
		}
	}
	if(cnt>1)
	{
		cout << "I'm Sorry Hansoo" << '\n';
		return 0;
	}
	for(int i = 'Z'; i >= 'A'; --i)
	{
		for (int j = 0; j<a[i-'A']; j+=2)
		{
			ret = char(i) + ret;
			ret += char(i);
		}
	}
	if(flag)
	{
		ret.insert(ret.begin() + ret.size()/2,mid);
	}
	cout << ret << '\n';
	return 0;
}