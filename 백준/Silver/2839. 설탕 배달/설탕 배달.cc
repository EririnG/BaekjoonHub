#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, th_sugar = 3,fi_sugar = 5,check = -1;
	cin >> n;
	int i = n / fi_sugar;
	

	while (i>=0)
	{
		if (0 == ((n - (i * fi_sugar)) % th_sugar))
		{
			cout << i + ((n - (i * fi_sugar)) / th_sugar);
			check = 1;
			break;
		}
		--i;
	}
	if(-1 == check)
		cout << "-1";
	return 0;
}
