#include <bits/stdc++.h>
using namespace std;
int num;
int a[26];
string ret;
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> num;
	
	for(int i = 0; i<num; ++i)
	{
		string s;
		cin >> s;
		a[s[0]-'a']++;
	}
	
	for(int i = 0; i<26; ++i)
	{
		if(a[i] >= 5)
			ret += ('a' + i);
	}
	if(ret.size())
		cout << ret << '\n';
	else
		cout << "PREDAJA" << '\n';
	
	return 0;
}