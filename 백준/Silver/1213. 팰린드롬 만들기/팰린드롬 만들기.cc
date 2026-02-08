#include<bits/stdc++.h>
using namespace std;
int a[200], cnt, flag;
string s, hi,bye, ret;
char mid;
int main()
{
	cin >> s;
	for(char c : s) a[c]++;
	for(int i = 'Z'; i>='A'; --i)
	{
		if(a[i])
		{
			if(a[i]&1)
			{
				mid = char(i);
				flag++;
				a[i]--;
			} 
			if(flag == 2)
				break;
			for(int j = 0; j<a[i]; j+=2)
			{
				ret = char(i) + ret;
				ret += char(i);
			}
		}
	}
	if(mid)
		ret.insert(ret.begin() + ret.size()/2, mid);
	if(flag == 2)
		cout << "I'm Sorry Hansoo" << '\n';
	else
		cout << ret << '\n';
	return 0;
}