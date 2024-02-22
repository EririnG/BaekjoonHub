#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	vector<int> num_arr(5);
	int sum = 0;
	for (int i = 0; i < 5; ++i)
	{
		int tmp;
		cin >> tmp;
		sum += tmp;
		num_arr[i] = tmp;
	}
	sort(num_arr.begin(), num_arr.end());
	cout << sum/5 <<"\n" << num_arr[2];
	
	return 0;
}
