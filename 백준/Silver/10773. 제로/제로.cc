#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	vector<int> a;
	int num_case,sum = 0;
	cin >> num_case;
	
	for (int i = 0; i < num_case; ++i)
	{
		int tmp;
		cin >> tmp;
		if (tmp == 0 && a.size() > 0)
			a.pop_back();
		else if (tmp != 0)
		{
			a.push_back(tmp);
		}
	}
	for (auto i : a)
		sum += i;

	cout << sum;
	return 0;
}
