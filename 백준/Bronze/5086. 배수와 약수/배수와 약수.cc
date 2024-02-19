#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	while (true)
	{
		int a, b;
		cin >> a >> b;
		if (0 == a && 0 == b)
			break;
		if (0 == b % a)
			cout << "factor" << "\n";
		else if (0 == a % b)
			cout << "multiple" << "\n";
		else
			cout << "neither" << "\n";
	}
	return 0;
}
