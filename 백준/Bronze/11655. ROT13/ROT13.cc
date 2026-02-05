#include <bits/stdc++.h>
using namespace std;
int num;
int a[26];
string s,ret;
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	
	getline(cin,s);
	
	for(int i = 0; i<s.size(); ++i)
	{
		if(s[i]>=97 && s[i] <= 122)
		{
			if(s[i]+13 > 'z')
			{
				ret += ('a' + (s[i] + 12 -'z'));
			}
			else
				ret += (s[i] + 13);
		}
		else if(s[i]>=65 && s[i]<97)
		{
			if(s[i]+13 > 'Z')
			{
				ret += ('A'+ (s[i] + 12 -'Z'));
			}
			else
				ret += (s[i] + 13);
		}
		else
			ret += s[i];
	}
	
	cout << ret << '\n';
	
	return 0;
}