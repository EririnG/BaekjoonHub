#include <bits/stdc++.h>
using namespace std;

string str;
int a,b,c;
int cnt[100];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a >> b >> c;
	for(int i = 0 ; i<3; ++i)
	{
		int hi, bye;
		cin >> hi >> bye;
		for(int j = hi ; j<bye; ++j)
		{
			cnt[j]++;
		}
	}
	int sum = 0;
	for(int i = 0; i<100; ++i)
	{
		if(cnt[i] == 1)
			sum += a;
		else if(cnt[i] == 2)
			sum += b*2;
		else if(cnt[i]==3)
			sum += c*3;
	}
	
	cout << sum << " ";
	
	return 0;
}
