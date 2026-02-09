#include <bits/stdc++.h>

using namespace std;
int a[100],ret = 0;
string s;

int main()
{
	int T;
    cin >> T; 
   	cin >> s;
   	for(int i = 0; i<s.size(); ++i)
   	{
   		a[s[i]]++;
	}
	
	ret = a['H'];
	ret = min(ret, a['I']);
	ret = min(ret, a['A']);
	ret = min(ret, a['R']);
	ret = min(ret, a['C']);
	cout << ret << '\n';
}
