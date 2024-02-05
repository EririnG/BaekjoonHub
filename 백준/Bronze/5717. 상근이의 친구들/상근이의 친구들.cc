#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int m, f;
	while (true)
	{
		cin >> m >> f;
		if (0 == m && 0 == f)
			break;
		cout << m + f<<'\n';
	}
	return 0;
}
