
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int num;
	int i = 0;
	while (cin >> num)
	{
		int check = 1;
		i = 1;
		while (1)
		{
			if (0 == check % num)
				break;
			else
			{
				++i;
				check = check * 10 + 1;
				check %= num;				
			}
		}
		cout << i << endl;
	}
	return 0;
}