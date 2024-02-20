#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int num, goal, sum,max = 0;
	cin >> num >> goal;
	vector<int> num_arr(num);
	for (int i = 0; i < num; ++i)
	{
		int input;
		cin >> input;
		num_arr[i]= input;
	}

	for (int i = 0; i < num-2; ++i)
	{
		for (int j = i + 1 ;j < num - 1; ++j)
		{
			for (int k = j + 1; k < num; ++k)
			{
				sum = num_arr[i] + num_arr[j] + num_arr[k];
				if (sum <= goal && sum > max)
					max = sum;

			}
		}
	}
	cout << max;



	return 0;
}
