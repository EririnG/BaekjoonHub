#include <bits/stdc++.h>
using namespace std;

bool compare(tuple<int, string, int> a, tuple<int, string, int> b)
{
	if (get<0>(a) == get<0>(b))
		return get<2>(a) < get<2>(b);
	else
		return get<0>(a) < get<0>(b);
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	vector<tuple<int, string, int>> n_arr;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int x;
		string y;
		cin >> x >> y;
		n_arr.push_back(make_tuple(x,y,i));
	}
	sort(n_arr.begin(), n_arr.end(),compare);
	
	for (int i = 0; i < n; ++i)
	{
		cout << get<0>(n_arr[i]) << " " << get<1>(n_arr[i]) << "\n";
	}
	
	return 0;
}
