#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	while (true)
	{
		int num;
		int check_num = 0;
		vector<int> num_arr;
		cin >> num;
		if (-1 == num)
			break;
		for (int i = 1; i <= num; ++i)
		{
			if (0 == num % i)
			{
				num_arr.push_back(i);
				check_num += i;
			}
		}
		if (check_num - num_arr.back() == num)
		{
			cout << num << " = ";
			for (int idx = 0; idx < num_arr.size() - 1; ++idx)
			{
				if (idx == num_arr.size() - 2)
					cout << num_arr[idx] << "\n";
				else
					cout << num_arr[idx] << " + ";
			}
		}
		else
			cout << num << " is NOT perfect." << "\n";

	}
	return 0;
}
