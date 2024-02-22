#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	vector<long long> x1;
	vector<long long> x2;
	int n;
	cin >> n ;
	for (int i = 0; i < n; ++i)
	{
		long long tmp;
		cin >> tmp;
		x1.push_back(tmp);
		x2.push_back(tmp);
	}
	sort(x1.begin(), x1.end());
	x1.erase(unique(x1.begin(), x1.end()), x1.end());
	for (int i = 0; i < n; ++i)
	{
		cout << lower_bound(x1.begin(), x1.end(), x2[i]) - x1.begin() << " ";
	}
	return 0;
}
