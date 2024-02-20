#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int num, n=2;
	cin >> num ;

	while (num > 1)
	{
		if (0 == num % n)
		{
			num = num / n;
			cout << n << "\n";
			n = 2;
			continue;
		}
		++n;
	}
	return 0;
}
