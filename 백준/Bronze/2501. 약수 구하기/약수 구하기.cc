#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int num, index;
	vector<int> num_arr;
	cin >> num >> index;
	for (int i = 1; i <= num; ++i)
	{
		if (0 == num % i)
			num_arr.push_back(i);
	}
	if (num_arr.size() < index)
		cout << "0";
	else
		cout << num_arr.at(index - 1);
	return 0;
}
