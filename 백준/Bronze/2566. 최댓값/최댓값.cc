#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int row = 9, col = 9 ,max =0, idi=1, idj=1;
	vector<vector<int>> ij_arr(row, vector<int>(col));
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			int input_num;
			cin >> input_num;
			if (input_num > max)
			{
				max = input_num;
				idi = i;
				idj = j;
			}
		}
	}
	cout << max << "\n" << idi+1 <<" "<< idj + 1;

	
	
	return 0;
}
